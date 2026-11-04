// name: FUN_1003d6541
// address: 1003d6541

void FUN_1003d6541(undefined8 param_1)

{
  long lVar1;
  char cVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long local_68;
  uint local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar4 = FUN_100496392();
  do {
    if (lVar4 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (*(char *)(lVar4 + 0x11) == '\x0f') {
      lVar5 = FUN_1004983e2(param_1,*(undefined4 *)(lVar4 + 0x98));
      if ((lVar5 == 0) || (*(int *)(lVar5 + 0xa4) == 0)) {
        if (*(int *)(lVar4 + 0x50) != 0) {
          uVar9 = 0;
          lVar5 = 8;
          local_60 = 0;
          local_68 = 0;
          uVar3 = 0;
          do {
            if ((((*(char *)(*(long *)(lVar4 + 0x58) + lVar5) == '\0') &&
                 (lVar1 = *(long *)(*(long *)(lVar4 + 0x58) + -8 + lVar5), lVar1 != 0)) &&
                (*(int *)(lVar1 + 0xa4) != 0)) &&
               (lVar6 = FUN_100497772(lVar1,*(undefined4 *)(lVar4 + 0x18)), lVar6 != 0)) {
              lVar7 = FUN_1004993b9(lVar1,5,*(undefined2 *)(lVar6 + 0xc));
              if (lVar7 == 0) {
                uVar8 = FUN_1001cc310();
                cVar2 = _os_log_type_enabled(uVar8,0x10);
                if (cVar2 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "imageInstance != nullptr";
                  __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              else if (local_60 < *(uint *)(lVar7 + 0x3c)) {
                uVar3 = *(undefined2 *)(lVar6 + 0xc);
                local_68 = lVar1;
                local_60 = *(uint *)(lVar7 + 0x3c);
              }
            }
            uVar9 = uVar9 + 1;
            lVar5 = lVar5 + 0x10;
          } while (uVar9 < *(uint *)(lVar4 + 0x50));
          if (local_68 != 0) {
            *(undefined4 *)(lVar4 + 0x94) = *(undefined4 *)(local_68 + 0x18);
            goto LAB_1003d66f6;
          }
        }
        *(undefined4 *)(lVar4 + 0x94) = 0;
        uVar3 = 0;
      }
      else {
        *(undefined4 *)(lVar4 + 0x94) = *(undefined4 *)(lVar4 + 0x98);
        uVar3 = *(undefined2 *)(lVar4 + 0xaa);
      }
LAB_1003d66f6:
      *(undefined2 *)(lVar4 + 0xa8) = uVar3;
    }
    lVar4 = FUN_100496449(lVar4);
  } while( true );
}

