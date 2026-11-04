// name: FUN_1001d9f4a
// address: 1001d9f4a

void FUN_1001d9f4a(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    cVar3 = FUN_1001edfea(*(undefined8 *)(lVar2 + 0x48));
    if (cVar3 == '\0') {
      FUN_1001e9de0(lVar2);
    }
    lVar1 = lVar2 + 0xe8;
    lVar6 = FUN_1001ead5c(lVar1);
    while (lVar6 != 0) {
      if ((*(int *)(lVar6 + 8) == 0x77726974) || (*(int *)(lVar6 + 8) == 0x72656164)) {
        FUN_1001db722(lVar2,lVar6,0xffffffd9);
      }
      else {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "false";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        iVar5 = FUN_1001eacad(lVar6,lVar1);
        if (iVar5 != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "MPDequeue(&pb->qElement, &threadInfo->reqQ) == noErr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      lVar6 = FUN_1001ead5c(lVar1);
    }
    if (cVar3 == '\0') {
      if (*(int *)(lVar2 + 0x100) != -1) {
        _close(*(int *)(lVar2 + 0x100));
        *(undefined4 *)(lVar2 + 0x100) = 0xffffffff;
        *(undefined1 *)(lVar2 + 0x129) = 0;
      }
      *(undefined1 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0xffffffce;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
      FUN_1001e89de(lVar2 + 0x58);
      FUN_1001e9eb9(lVar2);
    }
    else {
      *(undefined1 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0x7c) = 0xffffffce;
      *(undefined8 *)(lVar2 + 0x50) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    FUN_1001e8f15(lVar2 + 0x108);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

