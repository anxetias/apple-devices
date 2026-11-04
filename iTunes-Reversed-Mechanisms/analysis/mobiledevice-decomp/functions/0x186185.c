// rea decompile_all
// name: _uarpApplePlatformMessageExceededRetries
// address: 0x186185
// body: available
// range: 0x186185-0x18647f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 04dde8c57a87610dc458abf444e7f4727b39c7dade182ba942da8f8f7f4fe93b
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; macOS sessions require a matching executable Ghidra native decompiler; REA checks for it but does not build native components or change Gatekeeper quarantine state.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void _uarpApplePlatformMessageExceededRetries(long param_1,long param_2,long param_3,ushort param_4)

{
  long lVar1;
  short sVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
    __uarpOuiAppleGenericFeatures_myOui = 0x9bc;
    DAT_004a4d52 = 99;
    if (((*(char *)(param_3 + 8) == 'c' && *(short *)(param_3 + 6) == 0x9bc) &&
        (sVar2 = _uarpNtohs(*(undefined2 *)(param_3 + 9)), 0xe < param_4)) && (sVar2 == 0x20)) {
      iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
      if (iVar3 == 1) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x10);
      }
      else {
        iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
        if (iVar3 == 2) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x20);
        }
        else {
          iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
          if (iVar3 == 3) {
            UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x30);
          }
          else {
            iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
            if (iVar3 == 4) {
              UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x40);
            }
            else {
              iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
              if (iVar3 == 5) {
                UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x50);
              }
              else {
                iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                if (iVar3 == 6) {
                  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x60);
                }
                else {
                  iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                  if (iVar3 == 7) {
                    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x70);
                  }
                  else {
                    iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                    if (iVar3 == 0x1d) {
                      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x80);
                    }
                    else {
                      iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                      if (iVar3 == 8) {
                        UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x90);
                      }
                      else {
                        iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                        if (iVar3 == 9) {
                          UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xa0);
                        }
                        else {
                          iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                          if (iVar3 == 10) {
                            UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xb0);
                          }
                          else {
                            iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                            if (iVar3 == 0xb) {
                              UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xc0);
                            }
                            else {
                              iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                              if (iVar3 == 0xc) {
                                UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xd0);
                              }
                              else {
                                iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                if (iVar3 == 0xd) {
                                  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xe0);
                                }
                                else {
                                  iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                  if (iVar3 == 0xe) {
                                    UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0xf0);
                                  }
                                  else {
                                    iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                    if (iVar3 == 0xf) {
                                      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x100);
                                    }
                                    else {
                                      iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                      if (iVar3 == 0x10) {
                                        UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x110);
                                      }
                                      else {
                                        iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                        if (iVar3 == 0x11) {
                                          UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x120);
                                        }
                                        else {
                                          iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                          if (iVar3 == 0x12) {
                                            UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x130);
                                          }
                                          else {
                                            iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                            if (iVar3 == 0x13) {
                                              UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x140);
                                            }
                                            else {
                                              iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                              if (iVar3 == 0x14) {
                                                UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x150);
                                              }
                                              else {
                                                iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb));
                                                if (iVar3 == 0x15) {
                                                  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x160);
                                                }
                                                else {
                                                  iVar3 = _uarpNtohl(*(undefined4 *)(param_3 + 0xb))
                                                  ;
                                                  if (iVar3 == 0x16) {
                                                    UNRECOVERED_JUMPTABLE =
                                                         *(code **)(lVar1 + 0x170);
                                                  }
                                                  else {
                                                    iVar3 = _uarpNtohl(*(undefined4 *)
                                                                        (param_3 + 0xb));
                                                    if (iVar3 == 0x17) {
                                                      UNRECOVERED_JUMPTABLE =
                                                           *(code **)(lVar1 + 0x180);
                                                    }
                                                    else {
                                                      iVar3 = _uarpNtohl(*(undefined4 *)
                                                                          (param_3 + 0xb));
                                                      if (iVar3 != 0x18) {
                                                        return;
                                                      }
                                                      UNRECOVERED_JUMPTABLE =
                                                           *(code **)(lVar1 + 400);
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
      if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0018647e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)
                  (*(undefined8 *)(param_1 + 0x220),*(undefined8 *)(param_2 + 0x28),0,0);
        return;
      }
    }
  }
  return;
}

