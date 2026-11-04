// name: FUN_10028b460
// address: 10028b460

/* WARNING: Removing unreachable block (ram,0x00010028b5a8) */

void FUN_10028b460(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  int local_68 [2];
  long local_60;
  undefined1 local_58 [16];
  undefined4 local_48;
  int local_44;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  *param_1 = &PTR_FUN_10083a7c0;
  FUN_1001b7a44(param_1 + 1);
  FUN_1001b7a44(param_1 + 3);
  local_68[1] = 0;
  iVar3 = FUN_10001cb90(param_2,&local_60,local_68);
  if (iVar3 != 0) {
    if (DAT_1008b5bb0 != -1) {
      _dispatch_once(&DAT_1008b5bb0,&PTR___NSConcreteGlobalBlock_100845020);
    }
    uVar1 = DAT_1008b5ba8;
    cVar2 = _os_log_type_enabled(DAT_1008b5ba8,0x10);
    if (cVar2 != '\0') {
      local_48 = 0x4000100;
      local_44 = iVar3;
      __os_log_impl(0x100000000,uVar1,0x10,"ADIOTPRequest failed with error %d.",&local_48,8);
    }
  }
  if (local_68[0] != 0 && local_60 != 0) {
    FUN_1001a833e(local_58,local_60,local_68[0],1);
    FUN_1001a8908(&local_48,local_58,0);
    FUN_1001b80b2(param_1 + 3,&local_48);
    FUN_1001b7a50(&local_48);
    FUN_1001a85d4(local_58);
    FUN_100008ab0(local_60);
    local_60 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

