// name: FUN_10043fdcc
// address: 10043fdcc

void FUN_10043fdcc(int param_1,uint param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  char cVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  float fVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  puVar3 = DAT_1008c7688;
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_3a = "objectID != 0";
LAB_10043ffa4:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_10043feef:
    FUN_1001782e9(0,0);
  }
  else if (DAT_1008c7688 != (undefined8 *)0x0) {
    puVar1 = DAT_1008c7688 + 3;
    FUN_1001e9de0(puVar1);
    plVar2 = (long *)puVar3[1];
    for (plVar5 = (long *)*puVar3; (plVar5 != plVar2 && (*(int *)(*plVar5 + 0x490) != param_1));
        plVar5 = plVar5 + 1) {
    }
    if (plVar5 == plVar2) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        FUN_1001e9eb9(puVar1);
        return;
      }
      goto LAB_1004400d1;
    }
    plVar5 = (long *)*plVar5;
    FUN_1001e9eb9(puVar1);
    if (plVar5 != (long *)0x0) {
      if ((int)plVar5[3] != 0x434d4954) {
        uVar6 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar6,0x10);
        if (cVar4 != '\0') {
          local_3a = "CoreMediaItem::IsValid(coreMediaItem)";
          goto LAB_10043ffa4;
        }
        goto LAB_10043feef;
      }
      if (*(char *)((long)plVar5 + 0x531) == '\0') {
        if ((param_2 & 0x40) != 0) {
          (**(code **)(*plVar5 + 0x38))(plVar5);
        }
        plVar2 = (long *)plVar5[0x91];
        if (plVar2 != (long *)0x0) {
          if ((param_2 & 4) != 0) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                    /* WARNING: Could not recover jumptable at 0x00010043fff8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar2 + 0x20))(plVar2,plVar5);
              return;
            }
            goto LAB_1004400d1;
          }
          if ((param_2 & 8) == 0) {
            if ((param_2 >> 8 & 1) == 0) {
              if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                    /* WARNING: Could not recover jumptable at 0x00010043fed0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (**(code **)(*plVar2 + 0x18))(plVar2,plVar5,param_2);
                return;
              }
              goto LAB_1004400d1;
            }
            lVar7 = plVar5[0x96];
            if (((lVar7 != 0) && (plVar5[0x95] != 0)) &&
               (((char)plVar5[0xa6] == '\0' && (0.0 < *(float *)((long)plVar5 + 0x52c))))) {
LAB_10044008e:
              fVar8 = (float)_AVCFPlayerGetRate(lVar7);
              if ((fVar8 != *(float *)((long)plVar5 + 0x52c)) ||
                 (NAN(fVar8) || NAN(*(float *)((long)plVar5 + 0x52c)))) {
                if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                  _AVCFPlayerSetRate(plVar5[0x96]);
                  return;
                }
                goto LAB_1004400d1;
              }
            }
          }
          else if ((((plVar5[0x96] != 0) && (plVar5[0x95] != 0)) && ((char)plVar5[0xa6] == '\0')) &&
                  (0.0 < *(float *)((long)plVar5 + 0x52c))) {
            cVar4 = _AVCFPlayerItemIsPlaybackLikelyToKeepUp();
            if (cVar4 != '\0') {
              lVar7 = plVar5[0x96];
              goto LAB_10044008e;
            }
          }
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_1004400d1:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

