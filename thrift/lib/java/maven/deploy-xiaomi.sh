#!/bin/sh

mvn clean package source:jar install deploy \
 -DaltDeploymentRepository=archiva.releases::default::http://nexus.d.xiaomi.net/nexus/content/repositories/releases/
