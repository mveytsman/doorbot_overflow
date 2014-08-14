FROM debian:unstable

RUN apt-get update && apt-get install netcat-traditional -y

RUN mkdir /opt/hackerschool/
COPY . /opt/hackerschool/
WORKDIR /opt/hackerschool/

ENV DOORBOT_HOME /opt/hackerschool/

RUN groupadd user && useradd -d "$DOORBOT_HOME" -m -g user user
RUN mkdir -p "$DOORBOT_HOME" && chown -R user:user "$DOORBOT_HOME"
USER user

CMD ["/opt/hackerschool/serve"]
