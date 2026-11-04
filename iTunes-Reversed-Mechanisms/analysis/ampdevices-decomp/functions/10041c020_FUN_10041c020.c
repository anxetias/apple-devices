// name: FUN_10041c020
// address: 10041c020

void FUN_10041c020(long *param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined4 local_58;
  undefined8 local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined2 local_42;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar3 = (**(code **)(*param_1 + 0x50))();
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar6 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 == '\0') {
    *(undefined4 *)(param_1 + 0x260) = 0;
  }
  else {
    uVar4 = FUN_1001b83ae(param_1 + 0xc);
    cVar2 = FUN_1001df957("","",0);
    local_4a = "in";
    if (cVar2 == '\0') {
      local_4a = "";
    }
    local_40 = FUN_1004194cc((int)param_1[0x260]);
    local_58 = 0x8200302;
    local_4c = 0x820;
    local_42 = 0x820;
    local_54 = uVar4;
    __os_log_impl(0x100000000,uVar6,1,"\"%s\" %s state %s",&local_58,0x20);
    lVar1 = DAT_1008c75c0;
    *(undefined4 *)(param_1 + 0x260) = 0;
    if (lVar1 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
  }
  uVar6 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    uVar4 = FUN_1001b83ae(param_1 + 0xc);
    cVar2 = FUN_1001df957("setting","",0);
    pcVar7 = "in";
    if (cVar2 == '\0') {
      pcVar7 = "setting";
    }
    local_40 = FUN_1004194cc((int)param_1[0x260]);
    local_58 = 0x8200302;
    local_4c = 0x820;
    local_42 = 0x820;
    local_54 = uVar4;
    local_4a = pcVar7;
    __os_log_impl(0x100000000,uVar6,1,"\"%s\" %s state %s",&local_58,0x20);
  }
  *(undefined2 *)(param_1 + 0x26a) = 2;
  FUN_10041bf60(param_1);
  plVar5 = (long *)FUN_10039a28c();
  uVar6 = (**(code **)(*plVar5 + 0x58))(plVar5);
  FUN_1001c6987(uVar6,0x73776465,0,uVar3,param_2);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

