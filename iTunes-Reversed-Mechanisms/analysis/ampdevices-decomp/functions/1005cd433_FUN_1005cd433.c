// name: FUN_1005cd433
// address: 1005cd433

void FUN_1005cd433(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  int param_5)

{
  undefined8 uVar1;
  
  uVar1 = FUN_100171409(0,0,PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                        PTR__kCFTypeDictionaryValueCallBacks_10082e140);
  FUN_10016865a(uVar1,&cf_Message,param_2,0);
  if (param_5 != -0xb) {
    FUN_1001689a5(uVar1,&cf_OSStatus,param_5,0);
  }
  FUN_10016865a(uVar1,&cf_Explanation,param_3,0);
  FUN_10016865a(uVar1,&cf_LearnMoreURL,param_4,0);
  FUN_1001709a5(param_1,uVar1);
  FUN_10017060f(uVar1);
  return;
}

