// name: FUN_100162ca5
// address: 100162ca5

undefined8 FUN_100162ca5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = _CFURLCredentialStorageCopyCredentialsForProtectionSpace(param_1,param_3);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_100171475(lVar1,param_2);
    uVar2 = FUN_1001705fc(uVar2);
    FUN_10017060f(lVar1);
  }
  return uVar2;
}

