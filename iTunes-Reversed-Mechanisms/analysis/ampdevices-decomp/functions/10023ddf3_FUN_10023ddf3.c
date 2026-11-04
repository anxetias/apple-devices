// name: FUN_10023ddf3
// address: 10023ddf3

undefined8 FUN_10023ddf3(undefined8 param_1,undefined8 param_2,int param_3,int param_4,uint param_5)

{
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  FUN_1001b7a5c();
  FUN_1001b7b04(local_48,"{w}");
  FUN_1001b90b6(local_38,(long)param_3);
  FUN_1001ba564(local_58,param_1,local_48,local_38);
  FUN_1001b80b2(param_1,local_58);
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_38);
  FUN_1001b7a50(local_48);
  FUN_1001b7b04(local_48,"{h}");
  FUN_1001b90b6(local_38,(long)param_4);
  FUN_1001ba564(local_58,param_1,local_48,local_38);
  FUN_1001b80b2(param_1,local_58);
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_38);
  FUN_1001b7a50(local_48);
  FUN_1001b7b04(local_48,"{c}");
  FUN_1001b7b04(local_38,"bb");
  FUN_1001ba564(local_58,param_1,local_48,local_38);
  FUN_1001b80b2(param_1,local_58);
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_38);
  FUN_1001b7a50(local_48);
  if ((param_5 & 1) == 0) {
    FUN_1001b7b04(local_48,"{f}");
    FUN_1001b7b04(local_38,"jpg");
    FUN_1001ba564(local_58,param_1,local_48,local_38);
    FUN_1001b80b2(param_1,local_58);
  }
  else {
    FUN_1001b7b04(local_48,"{f}");
    FUN_1001b7b04(local_38,"png");
    FUN_1001ba564(local_58,param_1,local_48,local_38);
    FUN_1001b80b2(param_1,local_58);
  }
  FUN_1001b7a50(local_58);
  FUN_1001b7a50(local_38);
  FUN_1001b7a50(local_48);
  return param_1;
}

