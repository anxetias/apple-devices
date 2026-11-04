// rea decompile_all
// name: __ConvertLockdowndError
// address: 0x10f36e
// body: available
// range: 0x10f36e-0x10fa0d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10f85d to 0x14516c __AddNewAMDError (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 __ConvertLockdowndError(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _CFStringCompare(param_1,&cf_InvalidResponse,0);
  if (lVar1 == 0) {
    uVar2 = 0xe8000013;
  }
  else {
    lVar1 = _CFStringCompare(param_1,&cf_InternalError,0);
    if (lVar1 == 0) {
      uVar2 = 0xe80000f1;
    }
    else {
      lVar1 = _CFStringCompare(param_1,&cf_MissingKey,0);
      if (lVar1 == 0) {
        uVar2 = 0xe8000014;
      }
      else {
        lVar1 = _CFStringCompare(param_1,&cf_MissingValue,0);
        if (lVar1 == 0) {
          uVar2 = 0xe8000015;
        }
        else {
          lVar1 = _CFStringCompare(param_1,&cf_GetProhibited,0);
          if (lVar1 == 0) {
            uVar2 = 0xe8000016;
          }
          else {
            lVar1 = _CFStringCompare(param_1,&cf_SetProhibited,0);
            if (lVar1 == 0) {
              uVar2 = 0xe8000017;
            }
            else {
              lVar1 = _CFStringCompare(param_1,&cf_RemoveProhibited,0);
              if (lVar1 == 0) {
                uVar2 = 0xe8000018;
              }
              else {
                lVar1 = _CFStringCompare(param_1,&cf_ImmutableValue,0);
                if (lVar1 == 0) {
                  uVar2 = 0xe8000019;
                }
                else {
                  lVar1 = _CFStringCompare(param_1,&cf_PasswordProtected,0);
                  if (lVar1 == 0) {
                    uVar2 = 0xe800001a;
                  }
                  else {
                    lVar1 = _CFStringCompare(param_1,&cf_PasscodeRequired,0);
                    if (lVar1 == 0) {
                      uVar2 = 0xe80000ee;
                    }
                    else {
                      lVar1 = _CFStringCompare(param_1,&cf_UserDeniedPairing,0);
                      if (lVar1 == 0) {
                        uVar2 = 0xe8000095;
                      }
                      else {
                        lVar1 = _CFStringCompare(param_1,&cf_PairingDialogResponsePending,0);
                        if (lVar1 == 0) {
                          uVar2 = 0xe8000096;
                        }
                        else {
                          lVar1 = _CFStringCompare(param_1,&cf_MissingHostID,0);
                          if (lVar1 == 0) {
                            uVar2 = 0xe800001b;
                          }
                          else {
                            lVar1 = _CFStringCompare(param_1,&cf_InvalidHostID,0);
                            if (lVar1 == 0) {
                              uVar2 = 0xe800001c;
                            }
                            else {
                              lVar1 = _CFStringCompare(param_1,&cf_SessionActive,0);
                              if (lVar1 == 0) {
                                uVar2 = 0xe800001d;
                              }
                              else {
                                lVar1 = _CFStringCompare(param_1,&cf_SessionInactive,0);
                                if (lVar1 == 0) {
                                  uVar2 = 0xe800001e;
                                }
                                else {
                                  lVar1 = _CFStringCompare(param_1,&cf_MissingSessionID,0);
                                  if (lVar1 == 0) {
                                    uVar2 = 0xe800001f;
                                  }
                                  else {
                                    lVar1 = _CFStringCompare(param_1,&cf_InvalidSessionID,0);
                                    if (lVar1 == 0) {
                                      uVar2 = 0xe8000020;
                                    }
                                    else {
                                      lVar1 = _CFStringCompare(param_1,&cf_MissingService,0);
                                      if (lVar1 == 0) {
                                        uVar2 = 0xe8000021;
                                      }
                                      else {
                                        lVar1 = _CFStringCompare(param_1,&cf_InvalidService,0);
                                        if (lVar1 == 0) {
                                          uVar2 = 0xe8000022;
                                        }
                                        else {
                                          lVar1 = _CFStringCompare(param_1,&cf_ServiceLimit,0);
                                          if (lVar1 == 0) {
                                            uVar2 = 0xe800005b;
                                          }
                                          else {
                                            lVar1 = _CFStringCompare(param_1,&cf_CheckinSetupFailed,
                                                                     0);
                                            if (lVar1 == 0) {
                                              uVar2 = 0xe800005e;
                                            }
                                            else {
                                              lVar1 = _CFStringCompare(param_1,&cf_InvalidCheckin,0)
                                              ;
                                              if (lVar1 == 0) {
                                                uVar2 = 0xe8000023;
                                              }
                                              else {
                                                lVar1 = _CFStringCompare(param_1,&cf_CheckinTimeout,
                                                                         0);
                                                if (lVar1 == 0) {
                                                  uVar2 = 0xe8000024;
                                                }
                                                else {
                                                  lVar1 = _CFStringCompare(param_1,&
                                                  cf_CheckinConnectionFailed,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe800005f;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_CheckinReceiveFailed,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000060;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_CheckinResponseFailed,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000061;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_CheckinOutOfMemory,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000069;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_CheckinSendFailed,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000062;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_MissingPairRecord,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000025;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_SavePairRecordFailed,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000068;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_InvalidPairRecord,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe800005c;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_InvalidActivationRecord,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000026;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_MissingActivationRecord,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000027;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_ServiceProhibited,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe800005d;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&cf_WrongDroid,
                                                                             0);
                                                    if (lVar1 == 0) {
                                                      uVar2 = 0xe8000028;
                                                    }
                                                    else {
                                                      lVar1 = _CFStringCompare(param_1,&
                                                  cf_EscrowLocked,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000081;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_NotAValidChaperoneHost,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000083;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_PairingProhibitedOverThisConnection,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000082;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_FMiPProtected,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe8000099;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&cf_MCProtected
                                                                             ,0);
                                                    if (lVar1 == 0) {
                                                      uVar2 = 0xe800009a;
                                                    }
                                                    else {
                                                      lVar1 = _CFStringCompare(param_1,&
                                                  cf_MCChallengeRequired,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe800009b;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_RequireCUPairing,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe80000ed;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_EnterPinCode,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe80000e8;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&cf_BackOff,0);
                                                    if (lVar1 == 0) {
                                                      uVar2 = 0xe80000e9;
                                                    }
                                                    else {
                                                      lVar1 = _CFStringCompare(param_1,&
                                                  cf_GeneralNetworkPairingError,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe80000ea;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_CUPairingContinue,0);
                                                  if (lVar1 == 0) {
                                                    uVar2 = 0xe80000eb;
                                                  }
                                                  else {
                                                    lVar1 = _CFStringCompare(param_1,&
                                                  cf_CUPairingReset,0);
                                                  if (lVar1 != 0) {
                                                    uVar2 = __AddNewAMDError(param_1);
                                                    return uVar2;
                                                  }
                                                  uVar2 = 0xe80000ec;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return uVar2;
}

