// name: FUN_10035da29
// address: 10035da29

int FUN_10035da29(float param_1,int param_2,int param_3,uint *param_4,char param_5,uint param_6,
                 int param_7,uint param_8)

{
  float *pfVar1;
  char cVar2;
  int iVar3;
  int iVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  int iVar4;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "codecType != kUnknownDeviceAudioCodecType";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if ((ulong)*param_4 != 0) {
    iVar9 = 0xd;
    lVar10 = 0;
    do {
      iVar5 = *(int *)((long)param_4 + lVar10 + 4);
      if (iVar5 == param_3) {
        iVar4 = 0;
        iVar3 = 0;
        iVar5 = iVar4;
        if (param_3 == 0x2a2a2a2a) break;
        if ((param_5 == '\0') || (*(char *)((long)param_4 + lVar10 + 8) != '\0')) {
          if ((((param_1 == 0.0) && (!NAN(param_1))) ||
              ((iVar7 = 0xf, *(float *)((long)param_4 + lVar10 + 0x10) <= param_1 &&
               (pfVar1 = (float *)((long)param_4 + lVar10 + 0x14),
               param_1 < *pfVar1 || param_1 == *pfVar1)))) &&
             ((param_6 == 0 ||
              ((iVar7 = 0x10, *(uint *)((long)param_4 + lVar10 + 0x18) <= param_6 &&
               (param_6 <= *(uint *)((long)param_4 + lVar10 + (ulong)(param_5 != '\0') * 4 + 0x1c)))
              )))) {
            if (((param_8 & 2) == 0) || (*(char *)((long)param_4 + lVar10 + 9) != '\0')) {
              if (param_7 != 0) {
                if (param_7 == 2) {
                  cVar2 = *(char *)((long)param_4 + lVar10 + 0xb);
                }
                else {
                  if (param_7 != 1) {
                    if ((param_2 == 0x69506f64) &&
                       (iVar7 = 0x31, *(char *)((long)param_4 + lVar10 + 0xc) == '\0'))
                    goto LAB_10035db40;
                    goto LAB_10035db83;
                  }
                  cVar2 = *(char *)((long)param_4 + lVar10 + 10);
                }
                if (cVar2 == '\0') {
                  iVar7 = 0x31;
                  goto LAB_10035db40;
                }
              }
LAB_10035db83:
              if (param_3 == 0x61616320) {
                if (param_2 != 0x69506f64) break;
              }
              else {
                iVar5 = iVar3;
                if (param_3 != 0x616c6163 || param_2 != 0x69506f64) break;
              }
              iVar7 = 0xf;
              iVar8 = (int)(long)param_1;
              if (iVar8 < 24000) {
                if (iVar8 < 12000) {
                  iVar5 = iVar3;
                  if (((iVar8 == 0) || (iVar8 == 8000)) || (iVar8 == 0x2b11)) break;
                }
                else {
                  iVar5 = iVar3;
                  if (((iVar8 == 12000) || (iVar8 == 16000)) || (iVar8 == 0x5622)) break;
                }
              }
              else if (iVar8 < 48000) {
                iVar5 = iVar3;
                if (((iVar8 == 24000) || (iVar8 == 32000)) || (iVar8 == 0xac44)) break;
              }
              else if (iVar8 < 0x15888) {
                iVar5 = iVar4;
                if ((iVar8 == 48000) || (iVar8 == 64000)) break;
              }
              else {
                iVar5 = iVar3;
                if ((iVar8 == 0x15888) || (iVar8 == 96000)) break;
              }
            }
            else {
              iVar7 = 0x11;
            }
          }
        }
        else {
          iVar7 = 0xb;
        }
LAB_10035db40:
        if (iVar9 == 0xd) {
          iVar9 = iVar7;
        }
      }
      else if (iVar5 == 0x2a2a2a2a) {
        iVar5 = 0;
        break;
      }
      lVar10 = lVar10 + 0x24;
      iVar5 = iVar9;
    } while ((ulong)*param_4 * 0x24 != lVar10);
    goto LAB_10035dca5;
  }
  iVar5 = 0xd;
LAB_10035dca5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

