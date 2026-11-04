// name: FUN_1001629dc
// address: 1001629dc

void FUN_1001629dc(long param_1,undefined8 param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar2 = FUN_1001748e1(param_2);
  lVar3 = FUN_100174925(param_2);
  if (lVar3 == 0 || lVar2 == 0) goto LAB_100162aa9;
  lVar4 = FUN_10016226c(param_1,param_2);
  if (lVar4 == 0) goto LAB_100162aa9;
  uVar5 = FUN_1001620b6();
  lVar4 = _CFURLCredentialCreate(DAT_1008c4d90,lVar2,lVar3,0,2);
  if (lVar4 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      FUN_100670cb5(uVar6);
    }
    cVar1 = FUN_1001782e9(0,0);
    if (cVar1 != '\0') goto LAB_100162a87;
  }
  else {
LAB_100162a87:
    _CFURLCredentialStorageSetDefaultCredentialForProtectionSpace
              (*(undefined8 *)(param_1 + 0x90),lVar4,uVar5);
    FUN_10017060f(lVar4);
  }
  FUN_10017060f(uVar5);
LAB_100162aa9:
  FUN_10017060f(lVar2);
  FUN_10017060f(lVar3);
  return;
}

