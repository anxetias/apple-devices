// name: FUN_100326376
// address: 100326376

void FUN_100326376(long param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 local_38 [16];
  undefined4 local_28;
  undefined8 local_24;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined1 *)(param_1 + 0x21) = 1;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  uVar2 = FUN_1003c5880();
  cVar1 = _os_log_type_enabled(uVar2,1);
  if ((cVar1 != '\0') && (DAT_1008c7668 < 1)) {
    FUN_10029a5f0(local_38,*(undefined8 *)(param_1 + 0x28));
    uVar2 = FUN_1003c5880();
    cVar1 = _os_log_type_enabled(uVar2,1);
    if (cVar1 != '\0') {
      local_24 = FUN_1001b83ae(local_38);
      local_28 = 0x8200102;
      __os_log_impl(0x100000000,uVar2,1,"pk>      playlist modified fields %s",&local_28,0xc);
    }
    FUN_1001b7a50(local_38);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

