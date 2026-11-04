// name: FUN_1005fe398
// address: 1005fe398

void FUN_1005fe398(long param_1,int param_2,undefined8 param_3,undefined4 param_4,undefined8 param_5
                  )

{
  long *plVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  undefined8 local_78;
  uint local_68;
  uint local_64;
  undefined4 local_58;
  undefined4 local_54;
  undefined2 local_50;
  int local_4e;
  undefined2 local_4a;
  undefined4 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = param_5;
  if (DAT_1008c7d20 != -1) {
    _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
  }
  uVar4 = DAT_1008c7d18;
  cVar2 = _os_log_type_enabled(DAT_1008c7d18,0);
  if (cVar2 != '\0') {
    local_54 = *(undefined4 *)(param_1 + 0x30);
    local_58 = 0x4000300;
    local_50 = 0x400;
    local_4a = 0x400;
    local_4e = param_2;
    local_48 = param_4;
    __os_log_impl(0x100000000,uVar4,0,
                  "amplc> completed of the loading of domains for clientID:%u with status:%d and revision:%u"
                  ,&local_58,0x14);
  }
  FUN_100238ca8(&local_58,param_1 + 0x38);
  FUN_10032f0f2(local_88);
  local_78 = &cf_failure_info;
  FUN_1001a7b90(&local_68);
  FUN_1001a9164(param_3,&local_68,local_88);
  FUN_1001ab240(&local_68);
  cVar2 = FUN_1001c19cd();
  iVar3 = -0x80;
  if (cVar2 == '\0') {
    iVar3 = param_2;
    if (*(char *)(param_1 + 0x80) == '\x06') {
      if (param_2 == 0) {
        FUN_100395b14(&local_68,&local_58);
        plVar1 = *(long **)(param_1 + 0xf0);
        FUN_1001a7a9e(local_a0,local_90);
        (**(code **)(*plVar1 + 0x18))(plVar1,local_a0);
        FUN_1001a8fac(local_a0);
        FUN_1005fe7c4(param_1,param_4);
        iVar3 = FUN_1005fd1ce(param_1,0,1);
        if (iVar3 != 0) {
          if (DAT_1008c7d20 != -1) {
            _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
          }
          uVar4 = DAT_1008c7d18;
          cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
          if (cVar2 != '\0') {
            local_78 = (cfstringStruct *)CONCAT44(iVar3,0x4000100);
            __os_log_impl(0x100000000,uVar4,0x10,
                          "**ERROR**: InitFetchChangesCommand(true) failed! status:%d",&local_78,8);
          }
        }
        FUN_100179644(&local_68);
        *(undefined1 *)(param_1 + 0x80) = 7;
        FUN_100395b14(&local_68,&local_58);
        uVar4 = FUN_1001c156e();
        FUN_1001c6987(uVar4,0x6c69626c,0,0,0);
        FUN_100179644(&local_68);
        iVar3 = 0;
      }
      else {
        *(undefined1 *)(param_1 + 0x80) = 10;
      }
    }
    else {
      if (DAT_1008c7d20 != -1) {
        _dispatch_once(&DAT_1008c7d20,&PTR___NSConcreteGlobalBlock_100870418);
      }
      uVar4 = DAT_1008c7d18;
      cVar2 = _os_log_type_enabled(DAT_1008c7d18,0x10);
      if (cVar2 != '\0') {
        local_68 = 0x4000100;
        local_64 = (uint)*(byte *)(param_1 + 0x80);
        __os_log_impl(0x100000000,uVar4,0x10,
                      "**ERROR**: Invalid state for handling completion of getting domain info! state:%d"
                      ,&local_68,8);
      }
    }
  }
  uVar4 = FUN_10025b8e3();
  cVar2 = _os_signpost_enabled(uVar4);
  if (cVar2 != '\0') {
    local_68 = local_68 & 0xffff0000;
    __os_signpost_emit_with_name_impl
              (0x100000000,uVar4,2,0xeeeeb0b5b2b2eeee,"db_load","",&local_68,2);
  }
  if (*(long *)(param_1 + 0x150) == 0) goto LAB_1005fe5d2;
  FUN_100395b14(&local_68,&local_58);
  local_78 = (cfstringStruct *)CONCAT44(local_78._4_4_,iVar3);
  plVar1 = *(long **)(param_1 + 0x150);
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_10016bf14();
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_78,local_88);
  plVar1 = *(long **)(param_1 + 0x150);
  *(undefined8 *)(param_1 + 0x150) = 0;
  if (plVar1 == (long *)(param_1 + 0x130)) {
    lVar5 = 0x20;
LAB_1005fe5c3:
    (**(code **)(*plVar1 + lVar5))();
  }
  else {
    lVar5 = 0x28;
    if (plVar1 != (long *)0x0) goto LAB_1005fe5c3;
  }
  FUN_100179644(&local_68);
LAB_1005fe5d2:
  FUN_1001a8fac(local_88);
  FUN_10015a142(&local_58);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

