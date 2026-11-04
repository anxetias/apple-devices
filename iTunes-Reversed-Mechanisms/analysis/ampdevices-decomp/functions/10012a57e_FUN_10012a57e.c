// name: FUN_10012a57e
// address: 10012a57e

undefined4 FUN_10012a57e(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined8 local_30;
  undefined1 local_28 [8];
  
  FUN_1001a7b90(local_28);
  uVar1 = FUN_1001a9810(param_1,local_28,&local_30);
  if ((char)uVar1 != '\0') {
    *param_3 = local_30;
  }
  FUN_1001ab240(local_28);
  return uVar1;
}

