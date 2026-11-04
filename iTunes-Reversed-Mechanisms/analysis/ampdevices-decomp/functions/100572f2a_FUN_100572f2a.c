// name: FUN_100572f2a
// address: 100572f2a

undefined8 FUN_100572f2a(long *param_1,long *param_2,uint param_3,long *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_50;
  undefined4 local_44;
  long local_40;
  uint local_34;
  
  local_40 = 0;
  local_44 = 0;
  cVar1 = (**(code **)(*param_1 + 0xe0))();
  uVar2 = 0x2072;
  if (cVar1 != '\0') {
    local_34 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
               param_3 << 0x18;
    lVar3 = (**(code **)(*param_1 + 0x70))(param_1,*param_2);
    lVar3 = local_40 - lVar3;
    FUN_1001c631b(&local_34,lVar3 + param_1[3] + *param_2 + 4,4);
    param_4 = (long *)*param_4;
    if (param_4 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      local_50 = 4;
      uVar2 = (**(code **)(*param_4 + 0xa0))
                        (param_4,*param_2 + lVar3 + param_1[9] + 4,&local_34,&local_50,2);
    }
  }
  return uVar2;
}

