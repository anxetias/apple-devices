// name: FUN_10045456a
// address: 10045456a

void FUN_10045456a(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  
  uVar1 = *param_2;
  uVar2 = _objc_autoreleasePoolPush();
  FUN_100451790(*(undefined4 *)(param_1 + 8),1,0);
  cVar3 = FUN_100169ddb(uVar1,"rootMediaGroup");
  if (cVar3 != '\0') {
    uVar1 = FUN_1001c156e();
    FUN_1001c6987(uVar1,0x726d6761,*(undefined4 *)(param_1 + 8),0,0);
  }
  _objc_autoreleasePoolPop(uVar2);
  return;
}

