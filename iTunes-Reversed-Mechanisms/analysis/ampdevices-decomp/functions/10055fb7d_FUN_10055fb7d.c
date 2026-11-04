// name: FUN_10055fb7d
// address: 10055fb7d

uint FUN_10055fb7d(long param_1,undefined2 *param_2,undefined2 *param_3,uint *param_4)

{
  byte *pbVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_4e8;
  undefined1 local_4e4 [4];
  int local_4e0;
  int local_4dc;
  byte local_4d8;
  byte local_4d7;
  byte local_4d6;
  byte local_4d5;
  byte local_4d4;
  long local_4d0;
  long local_4c8;
  char local_4c0;
  char local_4bf;
  short local_4be [3];
  undefined4 local_4b8;
  char *local_4b4;
  undefined2 local_4ac;
  int local_4aa;
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  char *local_48a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  uVar9 = 0;
  if (DAT_1008c25d0 != '\0') goto LAB_10055fd19;
  DAT_1008c25d0 = 1;
  FUN_1001c62d9(&local_4e8,0x30);
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_498 = 0x8220202;
      local_494 = "Assertion failure";
      local_48c = 0x822;
      local_48a = "TrackInstanceIsValid(inTrackInstance)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_498,0x16);
    }
    FUN_1001782e9(0,0);
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    uVar9 = 0xffffffce;
    if (cVar2 != '\0') {
      local_498 = 0x8220202;
      local_494 = "Assertion failure";
      local_48c = 0x400;
      local_48a = (char *)CONCAT44(local_48a._4_4_,0xffffffce);
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_498,0x12);
    }
    goto LAB_10055fd12;
  }
  local_4e8 = *(int *)(param_1 + 0x3c);
  local_4dc = *(int *)(param_1 + 0x40);
  if (local_4dc == 0) {
    iVar3 = FUN_1002b0559(param_1,0xc2);
    if ((iVar3 == 0) && (iVar3 = FUN_1002b3b9a(param_1,&local_498), iVar3 != -0x80)) {
      if (iVar3 == 0) {
        local_4dc = FUN_10055fab2(*(undefined4 *)(param_1 + 0x3c),&local_498,&local_4e0,local_4e4);
        *(int *)(param_1 + 0x40) = local_4dc;
        goto LAB_10055fc67;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_4b8 = 0x8220202;
        local_4b4 = "Assertion failure";
        local_4ac = 0x400;
        local_4aa = iVar3;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_4b8,0x12);
      }
    }
  }
  else {
    local_4e0 = 0;
    local_4e4[0] = 0;
    piVar4 = (int *)FUN_10055fa32(local_4dc,0);
    local_4dc = 0;
    if (piVar4 != (int *)0x0) {
      local_4dc = *piVar4;
      local_4e0 = piVar4[2];
    }
LAB_10055fc67:
    pbVar1 = *(byte **)(param_1 + 0x10);
    local_4d8 = *pbVar1 >> 1 & 1;
    local_4d7 = *pbVar1 >> 2 & 1;
    local_4d5 = *pbVar1 >> 3 & 1;
    local_4d4 = *pbVar1 >> 5 & 1;
    if ((*(long *)(param_1 + 8) == 0) || (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
      local_4d6 = 0;
    }
    else {
      local_4d6 = (byte)(*(uint *)(param_1 + 0x48) >> 0x13) & 1;
    }
    local_4d0 = *(long *)(pbVar1 + 8);
    local_4c8 = *(long *)(pbVar1 + 0x20);
    local_4c0 = FUN_10047eee6();
    if (local_4bf == '\x02') {
      local_4d8 = 1;
    }
    FUN_10031ab0f(param_1,local_4be,~*(uint *)(*(long *)(param_1 + 8) + 0xc2) >> 0x1f);
  }
  if (param_2 != (undefined2 *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (undefined2 *)0x0) {
    *param_3 = 0;
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = 0;
  }
  uVar11 = 0;
  if (local_4e0 < 0x4d4f5650) {
    if (0x41554441 < local_4e0) {
      if (local_4e0 < 0x4d344220) {
        uVar11 = 0;
        if (local_4e0 < 0x45505542) {
          if (local_4e0 == 0x41554442) {
            uVar7 = 0xcee002f;
            uVar8 = 0x31;
            uVar9 = 0xce50028;
          }
          else {
            uVar6 = 0;
            uVar10 = 0;
            if (local_4e0 != 0x41554458) goto LAB_10056056f;
            uVar7 = 0xcee0021;
            uVar8 = 0x23;
            uVar9 = 0xce5001a;
          }
        }
        else {
          if (local_4e0 != 0x45505542) {
            uVar6 = 0;
            uVar10 = 0;
            if (local_4e0 == 0x4d344120) goto LAB_10056017a;
            goto LAB_10056056f;
          }
LAB_1005602bd:
          if (local_4d0 == 0) {
            if (local_4c8 == 0) {
              uVar7 = 0xcee0030;
              uVar8 = 0x32;
              goto LAB_10056054e;
            }
            uVar7 = 0xcee0031;
            uVar8 = 0x33;
            uVar9 = 0xce5002a;
          }
          else {
            uVar7 = 0xcee0032;
            uVar8 = 0x34;
            uVar9 = 0xce5002b;
          }
        }
      }
      else {
        if (local_4e0 < 0x4d345220) {
          if (local_4e0 != 0x4d344220) {
            uVar6 = 0;
            uVar10 = 0;
            if (local_4e0 != 0x4d345020) goto LAB_10056056f;
          }
LAB_10056017a:
          uVar7 = 0xcee0020;
          uVar8 = 0x22;
          if (local_4c0 != '\x0e') {
            if (local_4c0 == '\x1b') goto LAB_10056054e;
            if (local_4be[0] == 0x259) {
              if (local_4e8 == 0x48545450) {
                uVar7 = local_4d0 == 0 ^ 0xcee001f;
                uVar8 = local_4d0 == 0 ^ 0x1f;
                uVar9 = 0xce50018;
              }
              else {
                uVar9 = (uint)(local_4d0 == 0);
                uVar7 = local_4d0 == 0 ^ 0xcee001d;
                uVar8 = uVar9 ^ 0x1b;
                uVar9 = 0xce50016 - uVar9;
              }
            }
            else if ((ushort)(local_4be[0] - 0x1f5U) < 10) {
              if (local_4e8 == 0x48545450) {
                if (local_4d0 == 0) {
                  if (local_4c8 == 0) {
                    uVar7 = 0xcee0015;
                    uVar8 = 0;
                    uVar9 = 0xce50011;
                  }
                  else if ((local_4d8 == 1) && (local_4d7 == 1)) {
                    uVar7 = (uint)local_4d4 + (uint)local_4d4 * 2 + 0xcee0018;
                    uVar8 = (uint)local_4d4 + (uint)local_4d4 * 2 + 0x16;
                    uVar9 = 0xce50014;
                  }
                  else {
                    uVar7 = (uint)local_4d4 + (uint)local_4d4 * 2 + 0xcee0017;
                    uVar8 = (uint)local_4d4 + (uint)local_4d4 * 2 + 0x15;
                    uVar9 = 0xce50013;
                  }
                }
                else {
                  uVar7 = (uint)local_4d4 + (uint)local_4d4 * 2 + 0xcee0016;
                  uVar8 = (uint)local_4d4 + (uint)local_4d4 * 2 + 0x14;
                  uVar9 = 0xce50012;
                }
              }
              else if (local_4d0 == 0) {
                if (local_4c8 == 0) {
                  if (local_4e8 == 0x53485244) {
                    if (local_4bf == '\x01') goto LAB_10056074e;
                    uVar7 = 0xcee000d;
                    uVar8 = 0xc;
                    uVar9 = 0xce5000c;
                    if (local_4d6 == 1) {
                      uVar7 = 0xcee0011;
                      uVar8 = 0xd;
                      uVar9 = 0xce50010;
                    }
                  }
                  else {
                    uVar7 = 0xcee000d;
                    uVar8 = 0xc;
                    uVar9 = 0xce5000c;
                  }
                }
                else if ((local_4d8 == 1) && (local_4d7 == 1)) {
                  uVar7 = (uint)local_4d4 * 4 + 0xcee0010;
                  uVar8 = (uint)local_4d4 + (uint)local_4d4 * 2 + 0xf;
                  uVar9 = 0xce5000f;
                }
                else {
LAB_10056074e:
                  uVar7 = (uint)local_4d4 * 4 + 0xcee000f;
                  uVar8 = (uint)local_4d4 + (uint)local_4d4 * 2 + 0xe;
                  uVar9 = 0xce5000e;
                }
              }
              else if (local_4d4 == 0) {
                uVar7 = (uint)local_4d6 + (uint)local_4d6 * 2 + 0xcee000e;
                uVar8 = 0xd;
                uVar9 = (uint)local_4d6 + (uint)local_4d6 * 2 + 0xce5000d;
              }
              else {
                uVar7 = 0xcee0012;
                uVar8 = 0x10;
                uVar9 = 0xce5000d;
              }
            }
            else if (local_4e8 == 0x48545450) {
              uVar7 = 0xcee000b;
              uVar8 = 10;
              uVar9 = 0xce5000a;
            }
            else if ((local_4e8 == 0x53485244) && (local_4bf == '\x01')) {
              uVar7 = 0xcee000a;
              uVar8 = 9;
              uVar9 = 0xce50009;
            }
            else {
              uVar7 = 0xcee0008;
              uVar8 = 7;
              uVar9 = 0xce50007;
            }
            goto LAB_100560550;
          }
        }
        else if (local_4e0 != 0x4d345220) {
          uVar6 = 0;
          uVar10 = 0;
          if (local_4e0 == 0x4d345620) goto LAB_100560247;
          goto LAB_10056056f;
        }
        uVar8 = 0x22;
        uVar7 = 0xcee0020;
        uVar9 = 0xce50019;
      }
      goto LAB_100560550;
    }
    if (0x33677031 < local_4e0) {
      if (0x41494642 < local_4e0) {
        if (local_4e0 != 0x41494643) {
          uVar6 = 0;
          uVar10 = 0;
          if (local_4e0 != 0x41494646) goto LAB_10056056f;
        }
        if (local_4e8 == 0x48545450) {
          uVar7 = 0xcee002d;
          uVar8 = 0x2f;
          goto LAB_10056054e;
        }
        uVar7 = 0xcee002a;
        uVar8 = 0x2c;
        uVar9 = 0xce50023;
        goto LAB_100560550;
      }
      if (local_4e0 != 0x33677032) {
        uVar6 = 0;
        uVar10 = 0;
        if (local_4e0 != 0x33677070) goto LAB_10056056f;
      }
LAB_100560247:
      if (local_4e8 == 0x48545450) goto LAB_1005603f6;
      if (local_4e8 == 0x53485244) {
        uVar7 = 0xcee0005;
        uVar8 = 5;
        uVar9 = 0xce50005;
        if (local_4c8 == 0) {
          if (local_4d0 == 0) {
            if (local_4bf != '\x01') {
LAB_100560533:
              uVar7 = 0xcee0004;
              uVar8 = 4;
              uVar9 = 0xce50004;
            }
          }
          else {
LAB_100560368:
            uVar7 = 0xcee0003;
            uVar8 = 3;
            uVar9 = 0xce50003;
          }
        }
      }
      else if (local_4e0 == 0x4d4f5650) {
        uVar8 = 0x42;
        uVar7 = 0xcee0007;
        uVar9 = 0xcee0007;
      }
      else {
        if (local_4d0 != 0) goto LAB_100560368;
        if (local_4c8 == 0) goto LAB_100560533;
        if ((local_4d8 == 1) && (local_4d7 != 0)) {
          uVar7 = 0xcee0006;
          uVar8 = 6;
          uVar9 = 0xce50006;
        }
        else {
          uVar7 = 0xcee0005;
          uVar8 = 5;
          uVar9 = 0xce50005;
        }
      }
LAB_100560550:
      uVar6 = uVar9;
      uVar10 = uVar8;
      uVar11 = uVar7;
      if (param_2 != (undefined2 *)0x0) {
        FUN_1001c34b7(uVar7,param_2);
      }
      goto LAB_10056056f;
    }
    if (local_4e0 != 0) {
      if (local_4e0 != 0x33673220) {
        uVar6 = 0;
        uVar10 = 0;
        if (local_4e0 != 0x33677020) goto LAB_10056056f;
      }
      goto LAB_100560247;
    }
    uVar11 = 0;
    uVar9 = uVar11;
    if (local_4e8 < 0x48545450) {
      uVar9 = 0;
      if (local_4e8 != 0x43442020) {
        uVar10 = 0;
        uVar6 = 0;
        uVar9 = uVar11;
        if (local_4e8 != 0x44574e4c) goto LAB_10056056f;
      }
    }
    else if (local_4e8 != 0x48545450) {
      uVar10 = 0;
      uVar6 = 0;
      if (local_4e8 != 0x53485244) goto LAB_10056056f;
    }
  }
  else {
    if (0x504c531f < local_4e0) {
      if (local_4e0 < 0x57415645) {
        if ((local_4e0 == 0x504c5320) || (local_4e0 == 0x524d5020)) {
LAB_1005600de:
          uVar7 = 0xcee0036;
          uVar8 = 0x38;
          goto LAB_10056054e;
        }
        if (local_4e0 != 0x53643266) {
          uVar6 = 0;
          uVar10 = 0;
          goto LAB_10056056f;
        }
        uVar7 = 0xcee002c;
        uVar8 = 0x2e;
        uVar9 = 0xce50025;
        if (local_4e8 != 0x46494c45) {
          uVar6 = 0;
          uVar10 = 0;
          if (local_4e8 != 0x4d46494c) goto LAB_10056056f;
        }
      }
      else {
        if (local_4e0 < 0x69746520) {
          if (local_4e0 != 0x57415645) {
            uVar6 = 0;
            uVar10 = 0;
            if (local_4e0 == 0x69626f6f) goto LAB_1005602bd;
            goto LAB_10056056f;
          }
          if (local_4e8 != 0x48545450) {
            uVar7 = 0xcee002b;
            uVar8 = 0x2d;
            uVar9 = 0xce50024;
            goto LAB_100560550;
          }
          uVar7 = 0xcee002e;
          uVar8 = 0x30;
        }
        else if (local_4e0 == 0x69746520) {
          uVar7 = 0xcee0033;
          uVar8 = 0x35;
        }
        else {
          uVar6 = 0;
          uVar10 = 0;
          if (local_4e0 != 0x69746c70) goto LAB_10056056f;
          uVar7 = 0xcee0034;
          uVar8 = 0x36;
        }
LAB_10056054e:
        uVar9 = 0;
      }
      goto LAB_100560550;
    }
    if (0x4d504731 < local_4e0) {
      if (local_4e0 + 0xb2afb8ceU < 2) {
LAB_100560202:
        if (local_4e8 == 0x48545450) {
          uVar7 = 0xcee0029;
          uVar8 = 0x2b;
          uVar9 = 0xce50022;
        }
        else {
          uVar7 = 0xcee0028;
          uVar8 = 0x2a;
          uVar9 = 0xce50021;
        }
        goto LAB_100560550;
      }
      if (local_4e0 != 0x4d6f6f56) {
        uVar6 = 0;
        uVar10 = 0;
        if (local_4e0 == 0x50444620) {
          uVar7 = 0xcee0035;
          uVar8 = 0x37;
          goto LAB_10056054e;
        }
        goto LAB_10056056f;
      }
      if (local_4e8 != 0x48545450) {
        uVar7 = 0xcee0001;
        uVar8 = 1;
        uVar9 = 0xce50001;
        goto LAB_100560550;
      }
LAB_1005603f6:
      uVar7 = 0xcee0002;
      uVar8 = 2;
      uVar9 = 0xce50002;
      goto LAB_100560550;
    }
    if (local_4e0 < 0x4d503420) {
      if (local_4e0 == 0x4d4f5650) goto LAB_100560247;
      uVar6 = 0;
      uVar10 = 0;
      if (local_4e0 == 0x4d503355) goto LAB_1005600de;
    }
    else {
      if (local_4e0 == 0x4d503420) goto LAB_100560247;
      uVar6 = 0;
      uVar10 = 0;
      if (local_4e0 == 0x4d504547) goto LAB_100560202;
    }
LAB_10056056f:
    if (param_3 != (undefined2 *)0x0) {
      if (uVar6 != 0) {
        uVar11 = uVar6;
      }
      FUN_1001c34b7(uVar11,param_3);
    }
    uVar9 = 0;
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar10;
    }
  }
LAB_10055fd12:
  DAT_1008c25d0 = '\0';
LAB_10055fd19:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar9;
}

