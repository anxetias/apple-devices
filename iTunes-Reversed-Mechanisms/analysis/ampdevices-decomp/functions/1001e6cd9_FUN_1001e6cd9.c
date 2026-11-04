// name: FUN_1001e6cd9
// address: 1001e6cd9

undefined8 FUN_1001e6cd9(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  undefined1 local_40 [16];
  
  while( true ) {
    FUN_1001b7b04(local_40,".0");
    cVar1 = FUN_1001ba432(param_2,local_40,0x1b1);
    FUN_1001b7a50(local_40);
    if (cVar1 == '\0') break;
    lVar2 = FUN_1001b8378(param_2);
    FUN_1001ba6e0(local_40,param_2,0,lVar2 + -2);
    FUN_1001b80b2(param_2,local_40);
    FUN_1001b7a50(local_40);
  }
  FUN_1001b7a88(param_1,param_2);
  return param_1;
}

