// name: FUN_1001ac418
// address: 1001ac418

long * FUN_1001ac418(long *param_1,long *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  undefined1 local_58 [16];
  long *local_48;
  undefined8 local_40 [2];
  
  if (*param_2 == 0) {
    *param_1 = 0;
  }
  else {
    cVar2 = FUN_1001b8428(param_3);
    if (cVar2 == '\0') {
      local_48 = param_1;
      FUN_1001b7a5c(local_58,param_3);
      while( true ) {
        FUN_1001b7b04(local_40,"/");
        cVar2 = FUN_1001ba114(local_58,local_40,0x1b1);
        FUN_1001b7a50(local_40);
        uVar1 = DAT_1008c4d98;
        if (cVar2 == '\0') break;
        FUN_1001b8378(local_58);
        FUN_1001ba6e0(local_40,local_58,1);
        FUN_1001b80b2(local_58,local_40);
        FUN_1001b7a50(local_40);
      }
      lVar3 = *param_2;
      local_40[0] = FUN_1001b8d0c(local_58);
      lVar3 = _CFURLCreateCopyAppendingPathComponent(uVar1,lVar3,local_40[0],0);
      param_1 = local_48;
      *local_48 = lVar3;
      FUN_10016d588(local_40);
      FUN_1001b7a50(local_58);
    }
    else {
      lVar3 = *param_2;
      *param_1 = lVar3;
      if (lVar3 != 0) {
        _CFRetain();
      }
    }
  }
  return param_1;
}

