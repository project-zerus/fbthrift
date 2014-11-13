#!/bin/sh

mvn clean package source:jar install deploy \
 -DaltDeploymentRepository=archiva.snapshots::default::http://nexus.d.xiaomi.net:8081/nexus/content/repositories/snapshots/
