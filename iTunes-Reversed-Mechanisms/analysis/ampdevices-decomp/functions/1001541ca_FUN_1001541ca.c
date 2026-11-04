// name: FUN_1001541ca
// address: 1001541ca

ulong FUN_1001541ca(long *param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  
  FUN_1001acd14(local_50,*param_1);
  FUN_1001b7b04(local_30,"/json");
  cVar1 = FUN_1001ba31c(local_50,local_30,1);
  FUN_1001b7a50(local_30);
  if (cVar1 == '\0') {
    FUN_1001b7b04(local_30,"/x-apple-plist");
    cVar1 = FUN_1001ba31c(local_50,local_30,1);
    if (cVar1 != '\0') {
LAB_100154349:
      FUN_1001b7a50(local_30);
LAB_100154352:
      FUN_1001aa04a(local_30,*param_1 + 8);
      FUN_1001a7b1c(*param_1 + 0x18,local_30);
      goto LAB_100154372;
    }
    FUN_1001b7b04(local_40,"/x-plist");
    cVar1 = FUN_1001ba31c(local_50,local_40,1);
    if (cVar1 != '\0') {
LAB_100154340:
      FUN_1001b7a50(local_40);
      goto LAB_100154349;
    }
    FUN_1001b7b04(local_60,"/plist");
    cVar1 = FUN_1001ba31c(local_50,local_60,1);
    if (cVar1 != '\0') {
LAB_100154337:
      FUN_1001b7a50(local_60);
      goto LAB_100154340;
    }
    FUN_1001b7b04(local_70,"/xml");
    cVar1 = FUN_1001ba31c(local_50,local_70,1);
    if (cVar1 != '\0') {
      FUN_1001b7a50(local_70);
      goto LAB_100154337;
    }
    FUN_1001b7b04(local_80,"/xhtml");
    cVar1 = FUN_1001ba31c(local_50,local_80,1);
    FUN_1001b7a50(local_80);
    FUN_1001b7a50(local_70);
    FUN_1001b7a50(local_60);
    FUN_1001b7a50(local_40);
    FUN_1001b7a50(local_30);
    if (cVar1 != '\0') goto LAB_100154352;
  }
  else {
    lVar2 = FUN_1001acd78(*param_1);
    if ((lVar2 == 0xca) && (lVar2 = FUN_1001acd4a(*param_1), lVar2 == 0)) {
      FUN_1001a833e(local_30,"{}",2,0);
      FUN_1001a7b1c(*param_1 + 8,local_30);
      FUN_1001a85d4(local_30);
    }
    FUN_1001aa022(local_30,*param_1 + 8);
    FUN_1001a7b1c(*param_1 + 0x18,local_30);
LAB_100154372:
    FUN_1001a8fac(local_30);
    if (*(long *)(*param_1 + 0x18) == 0) {
      FUN_1001b7b04(local_30,PTR_s_com_apple_iTunes_errors_store_re_10083b490);
      FUN_1001aa38a(local_40,local_30,0x1d50);
      FUN_1001aaadc(param_2,local_40);
      FUN_1001aaad2(local_40);
      FUN_1001b7a50(local_30);
      uVar3 = 0;
      goto LAB_1001543ec;
    }
  }
  FUN_1001aa318(local_30);
  FUN_1001aaadc(param_2,local_30);
  FUN_1001aaad2(local_30);
  uVar3 = CONCAT71((int7)((ulong)param_2 >> 8),1);
LAB_1001543ec:
  FUN_1001b7a50(local_50);
  return uVar3 & 0xffffffff;
}

