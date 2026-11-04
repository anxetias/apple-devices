// name: FUN_10051b689
// address: 10051b689

void FUN_10051b689(void)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = FUN_1002f930c();
  if (lVar2 != 0) {
    do {
      lVar3 = FUN_10048a4b3(lVar2);
      if (lVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "playlistItem != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        *(ushort *)(lVar2 + 0xc6) =
             *(ushort *)(lVar2 + 0xc6) & 0xfffb | *(ushort *)(lVar3 + 0x60) >> 1 & 4;
        *(byte *)(lVar3 + 0x60) = *(byte *)(lVar3 + 0x60) & 0xf7;
      }
      lVar2 = FUN_1002f9451(lVar2);
    } while (lVar2 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

