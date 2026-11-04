// name: FUN_10051ceaa
// address: 10051ceaa

void FUN_10051ceaa(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_1004e0c3f(param_1,1);
  lVar3 = FUN_100315ede(uVar2);
  do {
    if (lVar3 == 0) {
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    cVar1 = FUN_1002bdfcb(lVar3,*(undefined1 *)(param_1 + 0x372),*(undefined1 *)(param_1 + 0x346),4,
                          4,0x200000);
    if (cVar1 != '\0') {
      for (lVar4 = FUN_100485529(lVar3); lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x18)) {
        lVar5 = FUN_100242590(lVar4);
        if (lVar5 == 0) {
          uVar2 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar2,0x10);
          if (cVar1 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "trackInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else {
          uVar6 = FUN_1004744bf(lVar5,0);
          if (((uVar6 & 4) != 0) && ((*(byte *)(lVar5 + 0xc5) & 1) == 0)) {
            FUN_1002c0f3a(param_2,*(undefined8 *)(lVar3 + 0x60));
            break;
          }
        }
      }
    }
    lVar3 = FUN_100316031(lVar3);
  } while( true );
}

