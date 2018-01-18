#!/bin/bash
#
# Test report running script for Travis CI 
# - called from .travis.yml script: section with environment variables 
#   already set.
#
${MITGCM_DECMD} "cd /MITgcm/verification; ./testreport -t ${MITGCM_EXP} ${MITGCM_TROPT} | tee ${MITGCM_EXP}/testreport_out.txt"
${MITGCM_DECMD} "cd /MITgcm/verification; python verification_parser.py -filename ${MITGCM_EXP}/testreport_out.txt -threshold ${MITGCM_PRECS}"
