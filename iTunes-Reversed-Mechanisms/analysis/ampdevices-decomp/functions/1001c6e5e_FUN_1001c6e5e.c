// name: FUN_1001c6e5e
// address: 1001c6e5e

void FUN_1001c6e5e(int *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == (int *)0x0) || (*param_1 != 0x4d536e64)) {
    uVar7 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar7,0x10);
    if (cVar5 != '\0') {
      FUN_1006a9d2a(uVar7);
    }
    FUN_1001782e9(0,0);
  }
  else if ((param_1[1] == 0) && (*(long *)(param_1 + 4) != 0)) {
    iVar6 = param_1[2];
    iVar2 = param_1[3];
    param_1[2] = iVar6 + 1;
    lVar8 = *(long *)(param_1 + 6);
    if (lVar8 != 0) {
      do {
        lVar3 = *(long *)(lVar8 + 8);
        if (*(char *)(lVar8 + 0x18) == '\0') {
          piVar4 = *(int **)(lVar8 + 0x10);
          if ((piVar4 == (int *)0x0) || (*piVar4 != 0x4d526376)) {
LAB_1001c6f3c:
            uVar7 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar7,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "MessageReceiverIsValid(receiver)";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
          }
          else if (*(long *)(piVar4 + 10) == 0) {
            if (*(code **)(piVar4 + 0xc) == (code *)0x0) goto LAB_1001c6f3c;
            if (piVar4[1] == 0) {
              (**(code **)(piVar4 + 0xc))
                        (param_2,param_3,param_4,param_5,*(undefined8 *)(piVar4 + 0xe));
            }
          }
          else if (piVar4[1] == 0) {
            FUN_1001c79d8(*(long *)(piVar4 + 10),param_2,param_3,param_4,param_5);
          }
        }
        lVar8 = lVar3;
      } while (lVar3 != 0);
      iVar6 = param_1[2] + -1;
    }
    param_1[2] = iVar6;
    if ((iVar6 == 0) && (param_1[3] != iVar2)) {
      lVar8 = *(long *)(param_1 + 6);
      while (lVar8 != 0) {
        lVar3 = *(long *)(lVar8 + 8);
        pcVar1 = (char *)(lVar8 + 0x18);
        lVar8 = lVar3;
        if (*pcVar1 == '\x01') {
          FUN_1001c6b11(param_1);
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

