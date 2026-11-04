// name: FUN_1005b087a
// address: 1005b087a

void FUN_1005b087a(long *param_1)

{
  short *psVar1;
  long lVar2;
  long lVar3;
  undefined1 local_48 [48];
  
  FUN_1001ceabd(local_48,0,FUN_1005b084a,param_1,0,0);
  FUN_1005a8a98(param_1,local_48);
  FUN_1005a4ae0(param_1);
  lVar2 = *param_1;
  lVar3 = *(long *)(lVar2 + 0x30);
  if (lVar3 != 0) {
    psVar1 = (short *)(lVar3 + 0x27b0);
    *psVar1 = *psVar1 + -1;
  }
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((long)param_1 + 0x7d) = 0;
  FUN_1004dd69c(lVar2,"");
  FUN_10023318f(*param_1,"");
  return;
}

