// name: FUN_100479f13
// address: 100479f13

void FUN_100479f13(undefined8 param_1,undefined8 param_2,short param_3,undefined8 param_4,
                  char param_5)

{
  char cVar1;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  cVar1 = FUN_1001b8428(param_2);
  if (cVar1 != '\0') {
    FUN_1001b7a44(param_1);
    return;
  }
  if (param_3 == 0) {
    cVar1 = FUN_1001b8428(param_4);
    if (cVar1 != '\0') {
      FUN_1001b7a5c(param_1,param_2);
      return;
    }
    FUN_1001b7b04(local_40,"%1$S: %2$S");
    FUN_1001bbf68(param_1,local_40,param_2,param_4);
  }
  else {
    if (param_5 == '\0') {
      FUN_100481ddf(local_40,param_3);
    }
    else {
      FUN_1001b8e86(local_40,param_3,1);
    }
    cVar1 = FUN_1001b8428(param_4);
    if (cVar1 == '\0') {
      FUN_1001b7b04(local_50,"%1$S: %2$S. %3$S");
      FUN_1001bc048(param_1,local_50,param_2,local_40,param_4);
    }
    else {
      FUN_1001b7b04(local_50,"%1$S: %2$S");
      FUN_1001bbf68(param_1,local_50,param_2,local_40);
    }
    FUN_1001b7a50(local_50);
  }
  FUN_1001b7a50(local_40);
  return;
}

