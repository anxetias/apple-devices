// name: FUN_10044bfd3
// address: 10044bfd3

void FUN_10044bfd3(long param_1)

{
  int iVar1;
  undefined4 uVar2;
  char cVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 local_48;
  undefined2 local_40;
  long local_3e;
  undefined2 local_36;
  undefined4 local_34;
  undefined2 local_30;
  undefined4 local_2e;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c7d20 != -1) {
    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
  }
  uVar4 = DAT_1008c7d18;
  cVar3 = _os_log_type_enabled(DAT_1008c7d18,1);
  if (cVar3 != '\0') {
    local_3e = param_1 + 0x20;
    local_34 = *(undefined4 *)(param_1 + 0x24);
    local_2e = 0x4e;
    if (*(char *)(param_1 + 0x28) != '\0') {
      local_2e = 0x59;
    }
    local_48 = 0x404100402;
    local_40 = 0x820;
    local_36 = 0x400;
    local_30 = 0x400;
    __os_log_impl(0x100000000,uVar4,1,
                  "SharingClient> Reflecting Cloud DAAP server message:%.4s for AMPLibrary. kind:%u flag:%c"
                  ,&local_48,0x1e);
  }
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 == 0x63444155) {
    uVar4 = FUN_1001c156e();
    uVar2 = *(undefined4 *)(param_1 + 0x24);
    uVar5 = *(undefined1 *)(param_1 + 0x28);
    uVar6 = 0x63444155;
  }
  else {
    if (iVar1 == 0x634e4143) {
      uVar4 = FUN_1001c156e();
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar6 = 0x634e4143;
    }
    else {
      if (iVar1 != 0x63444c44) {
        if (DAT_1008c7d20 != -1) {
          _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
        }
        uVar4 = DAT_1008c7d18;
        cVar3 = _os_log_type_enabled(DAT_1008c7d18,0x10);
        if (cVar3 != '\0') {
          local_3e = param_1 + 0x20;
          local_48 = 0x404100202;
          local_40 = 0x820;
          __os_log_impl(0x100000000,uVar4,0x10,
                        "**ERROR**: Unhandled Cloud DAAP server message:%.4s sent from AMPLibrary.",
                        &local_48,0x12);
        }
        goto LAB_10044c0da;
      }
      uVar4 = FUN_1001c156e();
      uVar2 = *(undefined4 *)(param_1 + 0x24);
      uVar6 = 0x63444c44;
    }
    uVar5 = 0;
  }
  FUN_1001c6987(uVar4,uVar6,uVar2,uVar5,0);
LAB_10044c0da:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

