// rea decompile_all
// name: _AMAuthInstallCryptoRegisterKeys
// address: 0x1ab413
// body: available
// range: 0x1ab413-0x1ab5dd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int _AMAuthInstallCryptoRegisterKeys(long param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  cVar1 = _CFDictionaryContainsKey(*(undefined8 *)(param_1 + 0x178),&cf_A1_public);
  iVar2 = 0;
  if (cVar1 == '\0') {
    iVar2 = _AMAuthInstallMonetLocalRegisterKeys(param_1);
    if ((iVar2 == 0xd) || (iVar2 == 0)) {
      iVar2 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                        (param_1,&cf_A1_public,
                         "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDa7skc8eqljgBuzhPl4ug+vYdj\npyAEh64Q9kHXtHi2halPI/RJeLP3SacMEuPzXmbqaNmPJvbf5WVzHLqldfYXIYD6\nZF7uZRmB/U82lTrFY/Fls8ZRBosyjnqQEC82mStZcK+gVJ8ay0rwnev/AGYF3Cz3\nQhXg3/lT5fgbaFjgiQIDAQAB\n-----END PUBLIC KEY-----\n"
                         ,0x111);
      if (iVar2 == 0) {
        iVar2 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                          (param_1,&cf_C1_public,
                           "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDV+l1ShKEjepgxwCmr3IMC2JSu\nn1TtpqxNBTJXGtBEDRqUOWA9AINW+dW/UuzE64HDl6Gk+jCNBHWo8xko6wIqmMu0\n+LVayTzuUWYqS3EfO7B4PZ7NyfKS949vFWfZLMw6tsAS2tmAa9MI6/Wa40R8QqJr\nnQB+U0sGr//X1MF4fwIDAQAB\n-----END PUBLIC KEY-----\n"
                           ,0x111);
        if (iVar2 == 0) {
          iVar2 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                            (param_1,&cf_P1_public,
                             "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDpmgtj4h0eTJEefZxtHWaho3G8\ns3e2w3fDg4G+eY67V0NPbNY/cFaF6FS49JP1FH+9wsfHghI5sA617vOV0I7wDf4c\ni2cjwyNvXzOry6eSdo2VojJFrbzwbUXVaM5oxhbfOKCoqt/DOMhsRB5W/a7tgz0R\nvNUrS1TylfddoIdX4wIDAQAB\n-----END PUBLIC KEY-----\n"
                             ,0x111);
          if (iVar2 == 0) {
            iVar2 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                              (param_1,&cf_A2_public,
                               "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDtOj9k0eggnMFSBjTvfi+yCX4A\nLEND5/iq6+ZKs8C2AMQ1JnBpWsdekX5xEoEAGqQNrTRhwQ3HZ21LW24csoM2fXMx\nktplGmIr1R6Iw81kvqaWDXYFYvBWOUU4YQPxTql9fA7DoP8UINGC/IYGfvCzDywR\nrsB2ViYwcaaS/CA4/QIDAQAB\n-----END PUBLIC KEY-----\n"
                               ,0x111);
            if (iVar2 == 0) {
              iVar2 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                                (param_1,&cf_C2_public,
                                 "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQDDvx8CbBNFIsNlPdxUtN7e/KEx\nxZSSIoSE/VLH3ePLTob2g2kasfPAGIngG5zb57rC8eItBYE7ET6bRnSTzp2vx6BO\ne3liNRrH/Rbl80y+cYFqC2mxwqLbdcx5V8Vf7NbSr1WA0olwUE9t1xrXcenDT3Gi\ntqupiuZdi0s1Snkg0wIDAQAB\n-----END PUBLIC KEY-----\n"
                                 ,0x111);
              if (iVar2 == 0) {
                iVar2 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                                  (param_1,&cf_P2_public,
                                   "-----BEGIN PUBLIC KEY-----\nMIGfMA0GCSqGSIb3DQEBAQUAA4GNADCBiQKBgQCloh2Bp/ZJo0W09bZYUc8Y6awy\nSpFaNjwSEFxGNESO2kQ/N2L3fhvutdGEf0HEbPR+MVcq/yn5VaHm3f/zG7NKgkne\n8Mtt9WJfb80alwUaC1AxGAGmiQRpekLG/cjWsSfJRTFsjhCcwBsxvOYZaMEGCfUd\nU9ohgXHbL7Lt5cLG1QIDAQAB\n-----END PUBLIC KEY-----\n"
                                   ,0x111);
                if (iVar2 == 0) {
                  iVar2 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                                    (param_1,&cf_P3_public,
                                     "-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAsDL110x3wt2VVXwTu/5z\nC0lpeWoa1LmVxKrrnyp1Gj6PmyQA++f48HfltMB+L4pEsXPFsSQgWEesHgxmhBeY\n7JYeKw0VOYySC1rBFprJmWy89XtWRb4NV43uuHeRRy3MU+VcoMaZPy9coRAAPp+w\nWwlUZlseSBDoygTEl+Ak3tS94cuODG4VBSUKq/PJ99hxM+sm8SZ7KkTrRJ9KIPG+\nTAIanm1dugqvtpDEHJtB2dL/ska4YFO5PXmSxRqlpren9VoJx4JmkjKg3zBjbWcP\n5yyIX75aQbRAs7FJbmm9Xb4xLgPUaMR8BwpwUSNza6RHAriD4jIXfhen3iCBKHTB\nmQIDAQAB\n-----END PUBLIC KEY-----\n"
                                     ,0x1c4);
                  if (iVar2 == 0) {
                    iVar2 = _AMAuthInstallCryptoRegisterKeysFromPEMBuffer
                                      (param_1,&cf_A3_public,
                                       "-----BEGIN PUBLIC KEY-----\nMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEArJFPRdnc/E7Vgatg/AHb\nKnGEudR+ug8WZghxMOlPad3fL42hHAXReVRcBE5liQXEyaP0ojy3s3QJhuNEXwLM\nYOLCKJNAj4SrE6dZqJ9CQamouvEnZjdC/gLBG5jSuAI4zF+hjObe8OZnV6YGcooE\nbRkA51dj+x5zmY+vT0va/w+EOdAiTWi6xiWdVFQTXCpCTUzA9qcax58XUi04+dcV\nSEwVO9U3ZeyoIUrJD/FmoDjjZOidCHDgsCGlnLfQP/gLKOMpOfzw4dWFIW1IiDvs\n9Uy+U3YhyyE4HPDVx2oAf8ojhBMzsdqXGVV148H0mZSkR4+ulZVlR4E/mxB2ZdP7\nHQIDAQAB\n-----END PUBLIC KEY-----\n"
                                       ,0x1c4);
                    if (iVar2 == 0) {
                      return 0;
                    }
                    pcVar3 = "AMAuthInstallCryptoRegisterKeysFromPEMBuffer(A3) failed";
                  }
                  else {
                    pcVar3 = "AMAuthInstallCryptoRegisterKeysFromPEMBuffer(P3) failed";
                  }
                }
                else {
                  pcVar3 = "AMAuthInstallCryptoRegisterKeysFromPEMBuffer(P2) failed";
                }
              }
              else {
                pcVar3 = "AMAuthInstallCryptoRegisterKeysFromPEMBuffer(C2) failed";
              }
            }
            else {
              pcVar3 = "AMAuthInstallCryptoRegisterKeysFromPEMBuffer(A2) failed";
            }
          }
          else {
            pcVar3 = "AMAuthInstallCryptoRegisterKeysFromPEMBuffer(P1) failed";
          }
        }
        else {
          pcVar3 = "AMAuthInstallCryptoRegisterKeysFromPEMBuffer(C1) failed";
        }
      }
      else {
        pcVar3 = "AMAuthInstallCryptoRegisterKeysFromPEMBuffer(A1) failed";
      }
    }
    else {
      pcVar3 = "AMAuthInstallMonetLocalRegisterKeys failed";
    }
    _AMAuthInstallLog(3,"AMAuthInstallCryptoRegisterKeys",pcVar3);
  }
  return iVar2;
}

