// name: FUN_10035bfb2
// address: 10035bfb2

undefined8 FUN_10035bfb2(long param_1,long param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  long in_RAX;
  undefined8 uVar2;
  long lVar3;
  long local_38;
  
  uVar2 = 0;
  local_38 = in_RAX;
  iVar1 = FUN_100187fa3(*(undefined8 *)(param_1 + 0x28),param_4,param_2,(long)param_3,0,&local_38);
  lVar3 = param_3 - local_38;
  if (lVar3 != 0) {
    ___bzero(param_2 + local_38,lVar3);
    uVar2 = 0x20a;
  }
  if ((iVar1 != -0x27) && (iVar1 != 0)) {
    uVar2 = 0x10a;
  }
  return uVar2;
}

