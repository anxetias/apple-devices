// name: FUN_1002301a0
// address: 1002301a0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1002301a0(void)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined1 local_478 [1056];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008a2de0 == 0) {
    lVar4 = FUN_100174c5a();
    if (lVar4 != 0) {
      lVar4 = FUN_100174d30(lVar4,&cf_complete,&cf_aif,0);
      if ((lVar4 != 0) && (cVar2 = FUN_10016ffd2(lVar4,local_478,0), cVar2 == '\x01')) {
        DAT_1008a2de0 = 0;
        lVar5 = FUN_10016ff43(0,local_478);
        if (lVar5 == 0) {
          uVar6 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar6,0x10);
          if (cVar2 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "url != __null";
            __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          iVar3 = _AudioServicesCreateSystemSoundID(lVar5,&DAT_1008a2de0);
          FUN_10017060f(lVar5);
          uVar1 = DAT_1008a2de0;
          if (iVar3 == 0) {
            puVar8 = DAT_1008a2dd0;
            if (DAT_1008a2dd0 == (undefined8 *)0x0) {
              puVar9 = &DAT_1008a2dd0;
              puVar10 = &DAT_1008a2dd0;
            }
            else {
              do {
                while (puVar7 = puVar8, puVar10 = puVar7, *(uint *)(puVar7 + 4) <= DAT_1008a2de0) {
                  if (DAT_1008a2de0 <= *(uint *)(puVar7 + 4)) goto LAB_100230337;
                  puVar8 = (undefined8 *)puVar7[1];
                  if ((undefined8 *)puVar7[1] == (undefined8 *)0x0) {
                    puVar9 = puVar7 + 1;
                    goto LAB_1002302d1;
                  }
                }
                puVar8 = (undefined8 *)*puVar7;
                puVar9 = puVar7;
              } while ((undefined8 *)*puVar7 != (undefined8 *)0x0);
            }
LAB_1002302d1:
            puVar7 = operator_new(0x448);
            *(uint *)(puVar7 + 4) = uVar1;
            ___bzero(puVar7 + 5,0x420);
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = puVar10;
            *puVar9 = puVar7;
            puVar8 = puVar7;
            if ((long *)*DAT_1008a2dc8 != (long *)0x0) {
              puVar8 = (undefined8 *)*puVar9;
              DAT_1008a2dc8 = (long *)*DAT_1008a2dc8;
            }
            FUN_1001ad344(DAT_1008a2dd0,puVar8);
            _DAT_1008a2dd8 = _DAT_1008a2dd8 + 1;
LAB_100230337:
            _memcpy(puVar7 + 5,local_478,0x420);
          }
        }
      }
      FUN_10017060f(lVar4);
    }
    if (DAT_1008a2de0 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
      goto LAB_1002303fb;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    _AudioServicesPlayAlertSound();
    return;
  }
LAB_1002303fb:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

