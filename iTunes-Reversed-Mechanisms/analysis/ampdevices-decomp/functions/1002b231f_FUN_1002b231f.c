// name: FUN_1002b231f
// address: 1002b231f

long FUN_1002b231f(long param_1,long param_2,uint param_3,char param_4,short param_5,char param_6,
                  long param_7,long param_8)

{
  uint uVar1;
  long *plVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  bool bVar9;
  undefined1 auVar10 [16];
  uint local_24c;
  long local_248;
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_238 = 0x8220202;
      local_234 = "Assertion failure";
      local_22c = 0x822;
      local_22a = "songID != 0";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
    FUN_1001782e9(1,0);
  }
  else {
    auVar10 = FUN_1002b7914();
    plVar6 = auVar10._0_8_;
    if (plVar6 != auVar10._8_8_ && plVar6 != (long *)(param_1 + 8)) {
      local_24c = 0xffffffff;
      local_248 = 0;
      do {
        lVar8 = plVar6[5];
        if (lVar8 != 0) {
          if ((*(long *)(lVar8 + 8) == 0) || (*(long *)(*(long *)(lVar8 + 8) + 0x10) == 0)) {
            lVar4 = 0;
          }
          else {
            lVar4 = *(long *)(*(long *)(lVar8 + 0x10) + 0x38);
          }
          if (lVar4 == param_2) {
            if ((param_8 != 0) && (*(long *)(*(long *)(lVar8 + 0x10) + 8) != param_8)) {
              lVar8 = 0;
            }
            if ((param_4 != '\0') && (lVar8 != 0)) {
              if ((*(long *)(lVar8 + 8) == 0) || (*(long *)(*(long *)(lVar8 + 8) + 0x10) == 0)) {
                uVar5 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar5,0x10);
                if (cVar3 != '\0') {
                  local_238 = 0x8220202;
                  local_234 = "Assertion failure";
                  local_22c = 0x822;
                  local_22a = "TrackInstanceIsValid(trackInstance)";
                  __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,
                                      0x16);
                }
                FUN_1001782e9(0,0);
LAB_1002b2450:
                bVar9 = param_4 == '\x01';
              }
              else {
                if (*(int *)(lVar8 + 0x3c) == 0x53485244) goto LAB_1002b2450;
                bVar9 = param_4 == '\x02';
              }
              if (bVar9) {
                lVar8 = 0;
              }
            }
            if ((param_6 != '\0') && (lVar8 != 0)) {
              cVar3 = FUN_10044b0bd(lVar8);
              if (cVar3 == '\0') {
                bVar9 = param_6 == '\x01';
              }
              else {
                bVar9 = param_6 == '\x02';
              }
              if (bVar9) {
                lVar8 = 0;
              }
            }
            if (((param_5 != 100) && (lVar8 != 0)) &&
               (*(short *)(*(long *)(lVar8 + 0x18) + 2) != param_5)) {
              lVar8 = 0;
            }
            if ((param_7 == 0) || (lVar8 == 0)) {
              if (lVar8 != 0) goto LAB_1002b24f6;
            }
            else {
              FUN_10030666b(lVar8,&local_238,1);
              cVar3 = FUN_1001e3edc(param_7,&local_238,0);
              if (cVar3 != '\0') {
LAB_1002b24f6:
                uVar1 = *(uint *)(lVar8 + 0x30);
                if (param_3 <= uVar1 && uVar1 < local_24c) {
                  local_24c = uVar1;
                  local_248 = lVar8;
                }
              }
            }
          }
        }
        plVar2 = (long *)plVar6[1];
        plVar7 = plVar6;
        if ((long *)plVar6[1] == (long *)0x0) {
          do {
            plVar6 = (long *)plVar7[2];
            bVar9 = (long *)*plVar6 != plVar7;
            plVar7 = plVar6;
          } while (bVar9);
        }
        else {
          do {
            plVar6 = plVar2;
            plVar2 = (long *)*plVar6;
          } while ((long *)*plVar6 != (long *)0x0);
        }
      } while (plVar6 != auVar10._8_8_);
      goto LAB_1002b25ea;
    }
  }
  local_248 = 0;
LAB_1002b25ea:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return local_248;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

