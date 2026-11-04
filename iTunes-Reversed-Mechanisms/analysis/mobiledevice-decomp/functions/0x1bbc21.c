// rea decompile_all
// name: _tss_submit_job_with_retry
// address: 0x1bbc21
// body: available
// range: 0x1bbc21-0x1bc8a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1bc89c to 0x2aa06e ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 _tss_submit_job_with_retry(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  cfstringStruct *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  size_t sVar16;
  char *pcVar17;
  char *pcVar18;
  char *pcVar19;
  char *pcVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  long lStack_32188;
  long lStack_32180;
  long lStack_32178;
  undefined8 uStack_32170;
  cfstringStruct *pcStack_32168;
  char *pcStack_32160;
  char *pcStack_32158;
  char *pcStack_32150;
  int aiStack_32148 [62];
  ulong uStack_32050;
  ulong uStack_32040;
  undefined8 auStack_32038 [12800];
  char acStack_19038 [102408];
  
  lVar2 = *(long *)PTR____stack_chk_guard_004412b8;
  if (param_1 == 0) {
    uVar23 = 1;
  }
  else {
    uVar23 = *(int *)(param_1 + 0x10) + (uint)(*(int *)(param_1 + 0x10) == 0);
  }
  uVar3 = *(undefined8 *)PTR__kCFAllocatorDefault_004410e8;
  uVar4 = *(undefined8 *)PTR__kCFHTTPVersion1_1_004413e8;
  uVar5 = *(undefined8 *)PTR___kCFSystemVersionBuildVersionKey_004410e0;
  uVar22 = 0;
  do {
    uVar22 = uVar22 + 1;
    _AMAuthInstallLog(6,"tss_submit_job_with_retry",
                      "TSS Connection attempt %d of %d.  (Will retry if TSS_ERR_SERVER_NOT_REACHABLE.)"
                      ,uVar22,uVar23);
    lStack_32180 = 0;
    ___bzero(acStack_19038,0x19000);
    if (*(long *)(param_1 + 8) == 0) {
      _AMAuthInstallLog(3,"tss_submit_job","no server URL");
      uVar6 = 0x2718;
LAB_001bbfb7:
      _tss_set_last_error(param_1,uVar6);
      *(undefined4 *)(param_1 + 0x40) = uVar6;
      pcVar8 = (cfstringStruct *)0x0;
      lStack_32188 = 0;
      lVar11 = 0;
      lStack_32178 = 0;
      lVar10 = 0;
      lVar9 = 0;
    }
    else {
      pcVar8 = (cfstringStruct *)
               _CFPropertyListCreateData(uVar3,*(undefined8 *)(param_1 + 0x18),100,0,&lStack_32180);
      if (pcVar8 == (cfstringStruct *)0x0) {
        _AMAuthInstallLog(3,"tss_submit_job","CFPropertyListCreateXMLData failed %@",lStack_32180);
        uVar6 = 0x2734;
        goto LAB_001bbfb7;
      }
      pcStack_32168 = pcVar8;
      uVar6 = _CFDataGetLength(pcVar8);
      lVar9 = _CFURLCreateWithString(uVar3,&cf_TSS_controller_action_2,*(undefined8 *)(param_1 + 8))
      ;
      if (lVar9 == 0) {
        pcVar17 = "CFURLCreateCopyAppendingPathComponent() failed";
LAB_001bc014:
        _AMAuthInstallLog(3,"tss_submit_job",pcVar17);
        iVar7 = 0x2739;
        _tss_set_last_error(param_1,0x2739);
        pcVar8 = (cfstringStruct *)0x0;
        lStack_32188 = 0;
        lStack_32178 = 0;
        lVar10 = 0;
LAB_001bc0e5:
        *(int *)(param_1 + 0x40) = iVar7;
        _CFRelease(pcStack_32168);
LAB_001bc0f5:
        lVar11 = 0;
      }
      else {
        lVar10 = _CFHTTPMessageCreateRequest(uVar3,&cf_POST,lVar9,uVar4);
        if (lVar10 == 0) {
          pcVar17 = "CFHTTPMessageCreateRequest failed";
          goto LAB_001bc014;
        }
        lStack_32188 = _CFStringCreateWithFormat(uVar3,0,&cf__d,uVar6);
        _CFHTTPMessageSetHeaderFieldValue(lVar10,&cf_Proxy_Connection,&cf_Keep_Alive);
        _CFHTTPMessageSetHeaderFieldValue(lVar10,&cf_Pragma,&cf_no_cache);
        _CFHTTPMessageSetHeaderFieldValue(lVar10,&cf_Content_Type,&cf_text_xml_charset__utf_8_);
        _CFHTTPMessageSetHeaderFieldValue(lVar10,&cf_Content_Length,lStack_32188);
        lVar11 = __CFCopySystemVersionDictionary();
        if (lVar11 != 0) {
          uVar12 = _CFDictionaryGetValue(lVar11,uVar5);
          _CFHTTPMessageSetHeaderFieldValue(lVar10,&cf_X_OS_Version,uVar12);
          _CFRelease(lVar11);
        }
        if (*(long *)(param_1 + 0x20) != 0) {
          _AMAuthInstallLog(7,"tss_submit_job","Attempting to add additional entries to HTTP header"
                           );
          _CFDictionaryApplyFunction
                    (*(undefined8 *)(param_1 + 0x20),__AMAuthInstallUpdateHTTPHeaderWithEntry,lVar10
                    );
          _AMAuthInstallLog(7,"tss_submit_job","Done adding additional fields to HTTP header");
        }
        _CFHTTPMessageSetBody(lVar10,pcStack_32168);
        lStack_32178 = _CFDictionaryCreateMutable
                                 (uVar3,0,PTR__kCFTypeDictionaryKeyCallBacks_004411b0,
                                  PTR__kCFTypeDictionaryValueCallBacks_004411b8);
        if (*(long *)(param_1 + 0x50) != 0) {
          _CFDictionaryAddValue(lStack_32178,&cf_SocksProxySettings);
          _AMAuthInstallLog(7,"tss_submit_job",
                            "Found a SOCKS proxy setting. Will attempt to use it.");
        }
        if (*(long *)(param_1 + 0x58) != 0) {
          _CFDictionaryAddValue(lStack_32178,&cf_TrustedServerCAs);
          _AMAuthInstallLog(7,"tss_submit_job","Found a trusted server CA. Will attempt to use it.")
          ;
        }
        lVar11 = _CFURLCopyScheme(*(undefined8 *)(param_1 + 8));
        if (lVar11 == 0) {
          pcVar17 = "Invalid scheme in url";
LAB_001bc0c4:
          _AMAuthInstallLog(3,"tss_submit_job",pcVar17);
          iVar7 = 0x2718;
          uVar12 = 0x2718;
LAB_001bc0d9:
          _tss_set_last_error(param_1,uVar12);
LAB_001bc0de:
          pcVar8 = &cf_Content_Length;
          goto LAB_001bc0e5;
        }
        aiStack_32148[0] = 10000;
        lVar13 = _CFStringCompare(lVar11,&cf_https,1);
        if ((lVar13 != 0) && (lVar13 = _CFStringCompare(lVar11,&cf_http,1), lVar13 != 0)) {
          _CFRelease(lVar11);
          pcVar17 = "unsupported URL scheme";
          goto LAB_001bc0c4;
        }
        _CFRelease(lVar11);
        iVar7 = _AMAuthInstallHttpMessageSendSyncNew
                          (0,uVar3,lVar10,auStack_32038,aiStack_32148,lStack_32178);
        if (iVar7 != 0) {
          _AMAuthInstallLog(3,"tss_submit_job","failed to send http request");
          iVar7 = 0x2712;
          uVar12 = 0x2712;
          goto LAB_001bc0d9;
        }
        iVar7 = aiStack_32148[0];
        if ((long)aiStack_32148[0] != 200) {
          _AMAuthInstallLog(3,"tss_submit_job","SendHttpRequest failed %d",(long)aiStack_32148[0]);
          if (aiStack_32148[0] == -1) {
            iVar7 = 0x2712;
          }
LAB_001bc25a:
          _tss_set_last_error(param_1,iVar7);
          _CFRelease(auStack_32038[0]);
          goto LAB_001bc0de;
        }
        uVar14 = _CFDataGetLength(auStack_32038[0]);
        if (0x19000 < uVar14) {
          _AMAuthInstallLog(3,"tss_submit_job","Response too large");
          iVar7 = 0x2744;
          goto LAB_001bc25a;
        }
        uVar12 = _CFDataGetBytePtr(auStack_32038[0]);
        uVar15 = _CFDataGetLength(auStack_32038[0]);
        pcVar17 = acStack_19038;
        ___memcpy_chk(pcVar17,uVar12,uVar15,0x19000);
        uVar12 = _CFDataGetLength(auStack_32038[0]);
        _CFRelease();
        uStack_32040 = 0;
        aiStack_32148[0] = 0;
        aiStack_32148[1] = 0;
        aiStack_32148[2] = 0;
        aiStack_32148[3] = 0;
        aiStack_32148[4] = 0;
        aiStack_32148[5] = 0;
        aiStack_32148[6] = 0;
        aiStack_32148[7] = 0;
        aiStack_32148[8] = 0;
        aiStack_32148[9] = 0;
        aiStack_32148[10] = 0;
        aiStack_32148[0xb] = 0;
        aiStack_32148[0xc] = 0;
        aiStack_32148[0xd] = 0;
        aiStack_32148[0xe] = 0;
        aiStack_32148[0xf] = 0;
        aiStack_32148[0x10] = 0;
        aiStack_32148[0x11] = 0;
        aiStack_32148[0x12] = 0;
        aiStack_32148[0x13] = 0;
        aiStack_32148[0x14] = 0;
        aiStack_32148[0x15] = 0;
        aiStack_32148[0x16] = 0;
        aiStack_32148[0x17] = 0;
        aiStack_32148[0x18] = 0;
        aiStack_32148[0x19] = 0;
        aiStack_32148[0x1a] = 0;
        aiStack_32148[0x1b] = 0;
        aiStack_32148[0x1c] = 0;
        aiStack_32148[0x1d] = 0;
        aiStack_32148[0x1e] = 0;
        aiStack_32148[0x1f] = 0;
        aiStack_32148[0x20] = 0;
        aiStack_32148[0x21] = 0;
        aiStack_32148[0x22] = 0;
        aiStack_32148[0x23] = 0;
        aiStack_32148[0x24] = 0;
        aiStack_32148[0x25] = 0;
        aiStack_32148[0x26] = 0;
        aiStack_32148[0x27] = 0;
        aiStack_32148[0x28] = 0;
        aiStack_32148[0x29] = 0;
        aiStack_32148[0x2a] = 0;
        aiStack_32148[0x2b] = 0;
        aiStack_32148[0x2c] = 0;
        aiStack_32148[0x2d] = 0;
        aiStack_32148[0x2e] = 0;
        aiStack_32148[0x2f] = 0;
        aiStack_32148[0x30] = 0;
        aiStack_32148[0x31] = 0;
        aiStack_32148[0x32] = 0;
        aiStack_32148[0x33] = 0;
        aiStack_32148[0x34] = 0;
        aiStack_32148[0x35] = 0;
        aiStack_32148[0x36] = 0;
        aiStack_32148[0x37] = 0;
        aiStack_32148[0x38] = 0;
        aiStack_32148[0x39] = 0;
        aiStack_32148[0x3a] = 0;
        aiStack_32148[0x3b] = 0;
        aiStack_32148[0x3c] = 0;
        aiStack_32148[0x3d] = 0;
        uStack_32050 = 0;
        uStack_32170 = uVar12;
        if ((int)uVar12 < 1) {
          pcStack_32160 = (char *)0x0;
          pcStack_32150 = (char *)0x0;
          pcStack_32158 = (char *)0x0;
          iVar7 = 0;
          pcVar20 = pcStack_32160;
          pcVar18 = pcStack_32158;
          pcVar19 = pcStack_32150;
        }
        else {
          pcVar18 = (char *)0x0;
          pcVar19 = (char *)0x0;
          pcVar20 = (char *)0x0;
          iVar21 = 0;
          do {
            if (pcVar20 == (char *)0x0) {
              if (iVar21 + 7 < (int)uVar12) {
                pcStack_32158 = pcVar18;
                pcStack_32150 = pcVar19;
                iVar7 = _strncmp(pcVar17,"STATUS",6);
                uVar12 = uStack_32170;
                pcVar18 = pcStack_32158;
                pcVar19 = pcStack_32150;
                if (iVar7 == 0) {
                  pcVar20 = pcVar17 + 7;
                  lVar11 = 0;
                  do {
                    if (pcVar17[lVar11 + 7] == '&') break;
                    *(char *)((long)auStack_32038 + lVar11 + -8) = pcVar17[lVar11 + 7];
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 8);
                  uStack_32040 = uStack_32040 & 0xffffffffffffff;
                }
                else {
                  pcVar20 = (char *)0x0;
                }
              }
              else {
                pcVar20 = (char *)0x0;
              }
            }
            if (pcVar19 == (char *)0x0) {
              if (iVar21 + 8 < (int)uVar12) {
                pcStack_32160 = pcVar20;
                pcStack_32158 = pcVar18;
                iVar7 = _strncmp(pcVar17,"MESSAGE",7);
                uVar12 = uStack_32170;
                pcVar18 = pcStack_32158;
                pcVar20 = pcStack_32160;
                if (iVar7 == 0) {
                  pcVar19 = pcVar17 + 8;
                  lVar11 = 8;
                  do {
                    cVar1 = pcVar17[lVar11];
                    if ((cVar1 == '\n') || (cVar1 == '&')) break;
                    *(char *)((long)&pcStack_32150 + lVar11) = cVar1;
                    lVar11 = lVar11 + 1;
                  } while (lVar11 != 0x108);
                  uStack_32050 = uStack_32050 & 0xffffffffffffff;
                }
                else {
                  pcVar19 = (char *)0x0;
                }
              }
              else {
                pcVar19 = (char *)0x0;
              }
            }
            if (pcVar18 == (char *)0x0) {
              if (iVar21 + 0xf < (int)uVar12) {
                pcStack_32160 = pcVar20;
                pcStack_32150 = pcVar19;
                iVar7 = _strncmp(pcVar17,"REQUEST_STRING",0xe);
                uVar12 = uStack_32170;
                pcVar19 = pcStack_32150;
                pcVar20 = pcStack_32160;
                if (iVar7 == 0) {
                  pcVar18 = pcVar17 + 0xf;
                  iVar7 = iVar21;
                  if (pcStack_32160 != (char *)0x0 && pcStack_32150 != (char *)0x0) break;
                }
                else {
                  pcVar18 = (char *)0x0;
                }
              }
              else {
                pcVar18 = (char *)0x0;
              }
            }
            pcVar17 = pcVar17 + 1;
            iVar21 = iVar21 + 1;
            iVar7 = (int)uVar12;
          } while (iVar21 != iVar7);
        }
        pcStack_32150 = pcVar19;
        pcStack_32158 = pcVar18;
        pcStack_32160 = pcVar20;
        _AMAuthInstallLog(8,"tss_submit_job","----Begin request");
        _AMAuthInstallLog(8,"tss_submit_job","%@",*(undefined8 *)(param_1 + 0x18));
        _AMAuthInstallLog(8,"tss_submit_job","----End request");
        _AMAuthInstallLog(8,"tss_submit_job","----Begin response");
        _AMAuthInstallLog(8,"tss_submit_job","%s",acStack_19038);
        _AMAuthInstallLog(8,"tss_submit_job","----End response");
        if (pcStack_32160 == (char *)0x0 || pcStack_32150 == (char *)0x0) {
          _AMAuthInstallLog(3,"tss_submit_job","invalid response");
          iVar21 = 0x2744;
          uVar12 = 0x2744;
          goto LAB_001bc6c4;
        }
        iVar21 = _atoi((char *)&uStack_32040);
        if (iVar21 != 0) {
          _AMAuthInstallLog(3,"tss_submit_job","error from server=%d (%s)",iVar21,aiStack_32148);
          if (*(long *)(param_1 + 0x48) != 0) {
            _CFRelease();
          }
          sVar16 = _strlen((char *)aiStack_32148);
          lVar11 = _CFStringCreateWithBytes(uVar3,aiStack_32148,sVar16,0x8000100,0);
          *(long *)(param_1 + 0x48) = lVar11;
          if (lVar11 == 0) {
            _AMAuthInstallLog(3,"tss_submit_job","Server message failed to convert: %d",iVar21);
          }
LAB_001bc6c9:
          *(int *)(param_1 + 0x40) = iVar21;
          _CFRelease(pcStack_32168);
          pcVar8 = &cf_Content_Length;
          goto LAB_001bc0f5;
        }
        if (pcStack_32158 == (char *)0x0) {
          _AMAuthInstallLog(3,"tss_submit_job","no data in response");
          iVar21 = 0x2745;
          uVar12 = 0x2745;
LAB_001bc6c4:
          _tss_set_last_error(param_1,uVar12);
          goto LAB_001bc6c9;
        }
        lVar11 = (long)(((int)uStack_32170 - iVar7) + -0xf);
        ___memcpy_chk(auStack_32038,pcStack_32158,lVar11,0x19000);
        pcVar17 = (char *)_CFDataCreate(uVar3,auStack_32038,lVar11);
        if (pcVar17 == (char *)0x0) {
          _AMAuthInstallLog(3,"tss_submit_job","CFDataCreate failed");
          iVar21 = 0x2746;
          uVar12 = 0x2746;
          goto LAB_001bc6c4;
        }
        if (lStack_32180 != 0) {
          _CFRelease();
        }
        pcStack_32150 = pcVar17;
        lVar11 = _CFPropertyListCreateWithData(uVar3,pcVar17,0,0,&lStack_32180);
        if (lVar11 == 0) {
          _AMAuthInstallLog(3,"tss_submit_job","CFPropertyListCreateFromXMLData failed (%@)",
                            lStack_32180);
          uVar6 = 0x2747;
LAB_001bc845:
          _tss_set_last_error(param_1,uVar6);
        }
        else {
          lVar13 = _CFDictionaryCreateCopy(uVar3,lVar11);
          *(long *)(param_1 + 0x28) = lVar13;
          uVar6 = 0;
          if (lVar13 == 0) {
            _AMAuthInstallLog(3,"tss_submit_job","CFDictionaryCreateCopy failed");
            uVar6 = 0x2748;
            goto LAB_001bc845;
          }
        }
        *(undefined4 *)(param_1 + 0x40) = uVar6;
        _CFRelease(pcStack_32168);
        _CFRelease(pcStack_32150);
        pcVar8 = &cf_Content_Length;
      }
    }
    if (lStack_32180 != 0) {
      pcStack_32168 = pcVar8;
      _CFRelease();
      pcVar8 = pcStack_32168;
    }
    if (lVar9 != 0) {
      _CFRelease(lVar9);
    }
    if (lVar10 != 0) {
      _CFRelease(lVar10);
    }
    if (pcVar8 != (cfstringStruct *)0x0) {
      _CFRelease(pcVar8);
    }
    if (lStack_32188 != 0) {
      _CFRelease();
    }
    if (lVar11 != 0) {
      _CFRelease(lVar11);
    }
    if (lStack_32178 != 0) {
      _CFRelease();
    }
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
      (**(code **)(param_1 + 0x30))(param_1);
    }
    if (((param_1 == 0) || (uVar23 <= uVar22)) || (*(int *)(param_1 + 0x40) != 0x2712)) {
      if (*(long *)PTR____stack_chk_guard_004412b8 != lVar2) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return 0;
    }
  } while( true );
}

