// name: FUN_100571028
// address: 100571028

void FUN_100571028(long *param_1,long param_2,undefined8 param_3,long *param_4,long *param_5)

{
  long lVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = (**(code **)(*param_1 + 0x80))(param_1,0x7472616b,param_2,param_3,param_4);
  if (param_5 != (long *)0x0 && cVar3 == '\x01') {
    lVar1 = param_4[1];
    lVar2 = *param_4;
    *param_5 = lVar1 + lVar2;
    *param_5 = (lVar1 + lVar2) - *(long *)(param_2 + 0x18);
  }
  return;
}

