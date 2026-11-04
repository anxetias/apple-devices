// name: FUN_100319a94
// address: 100319a94

void FUN_100319a94(long *param_1,char param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_a0;
  undefined4 local_98;
  char *local_94;
  undefined2 local_8c;
  int local_8a;
  char local_78;
  char cStack_77;
  undefined2 uStack_76;
  int iStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
LAB_100319b58:
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_78 = '\x02';
      cStack_77 = '\x02';
      uStack_76 = 0x822;
      iStack_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x63b4;
      uStack_68 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100319b7a;
  }
  if ((int)param_1[0x10] != 0x74646174) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_78 = '\x02';
      cStack_77 = '\x02';
      uStack_76 = 0x822;
      iStack_74 = 0x7ab58c;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0xec03;
      uStack_68 = 0x1007a;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    cVar3 = FUN_1001782e9(0,1);
    if (cVar3 == '\0') goto LAB_100319b58;
  }
  cVar3 = *(char *)((long)param_1 + 0x1bba);
  if (param_2 != '\0' && cVar3 == param_2) goto LAB_100319b7a;
  local_58 = 0;
  uStack_50 = 0;
  uStack_68 = 0;
  uStack_62 = 0;
  uStack_60 = 0;
  uStack_76 = 0;
  uStack_70 = 0;
  uStack_6c = 0;
  uStack_6a = 0;
  local_48 = 0;
  switch(param_2) {
  case '\0':
    local_a0 = 0x74646c66;
    break;
  case '\x01':
    local_a0 = 0x74646175;
    break;
  case '\x02':
    local_a0 = 0x7464756e;
    break;
  case '\x03':
    local_a0 = 0x7464644c;
    break;
  case '\x04':
    local_a0 = 0x74646c6f;
    break;
  case '\x05':
    local_a0 = 0x74647070;
    break;
  case '\x06':
    local_a0 = 0x74646c64;
    bVar2 = true;
    bVar1 = false;
    goto LAB_100319c3e;
  default:
    local_a0 = 0;
    bVar1 = true;
    goto LAB_100319c34;
  }
  bVar1 = false;
LAB_100319c34:
  bVar2 = false;
LAB_100319c3e:
  *(char *)((long)param_1 + 0x1bba) = param_2;
  local_78 = cVar3;
  cStack_77 = param_2;
  iStack_74 = param_3;
  iVar4 = FUN_1002fc1ae(param_1,0x7464634c);
  if ((iVar4 != -0x80) && (iVar4 != 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_98 = 0x8220202;
      local_94 = "Assertion failure";
      local_8c = 0x400;
      local_8a = iVar4;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_98,0x12);
    }
  }
  if (!bVar1) {
    if (bVar2) {
      (**(code **)(*param_1 + 0x10))(param_1,0x74647244,param_1,(long)param_3,0);
    }
    (**(code **)(*param_1 + 0x10))(param_1,local_a0,param_1,(long)param_3,0);
  }
LAB_100319b7a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

