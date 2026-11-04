// name: FUN_1001acd9a
// address: 1001acd9a

undefined8 FUN_1001acd9a(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 local_30;
  undefined8 local_28;
  
  if ((*param_2 != 0) && (lVar1 = _CFURLResponseGetHTTPResponse(), lVar1 != 0)) {
    local_28 = FUN_1001b8d0c(param_3);
    local_30 = _CFHTTPMessageCopyHeaderFieldValue(lVar1,local_28);
    FUN_1001b7eb0(param_1,local_30);
    FUN_10016d588(&local_30);
    FUN_10016d588(&local_28);
    return param_1;
  }
  FUN_1001b7a44(param_1);
  return param_1;
}

