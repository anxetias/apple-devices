// name: FUN_100476f47
// address: 100476f47

void FUN_100476f47(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,int param_5,
                  short *param_6)

{
  int iVar1;
  undefined1 local_d0 [88];
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_40;
  int local_34;
  
  *param_6 = 0;
  local_40 = param_4;
  if (*(char *)(param_1 + 0xba + (param_2 & 0xffffffff)) == '\0') {
    local_58 = 0;
    uStack_50 = 0;
    local_68 = 0;
    uStack_60 = 0;
    local_78 = 0;
    uStack_70 = 0;
    local_34 = param_5;
    FUN_1002fa385(param_1,param_2,local_d0);
    param_5 = local_34;
    FUN_1002fa9ac(local_d0,0);
  }
  iVar1 = *(int *)(param_1 + 0x1a8 + (param_2 & 0xffffffff) * 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_1001de41f(param_3,iVar1,param_6);
  }
  if ((param_5 != 0) && (*param_6 == 0 || iVar1 != 0)) {
    FUN_1001de41f(local_40,param_5,param_6);
  }
  return;
}

