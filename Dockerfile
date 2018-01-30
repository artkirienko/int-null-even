FROM alpine
RUN apk add --update build-base
COPY main.c /usr/src/app/
COPY Makefile /usr/src/app/
RUN cd /usr/src/app/ && make
CMD ["/usr/src/app/int-null-even"]
