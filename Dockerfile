FROM alpine
RUN apk add --update build-base
COPY main.c /usr/src/app/
RUN cd /usr/src/app/ && gcc -o int-null-even main.c
CMD ["/usr/src/app/int-null-even"]
