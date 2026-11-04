// name: FUN_10046c9cc
// address: 10046c9cc

void FUN_10046c9cc(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_R8;
  
  uVar3 = FUN_100166c1b(in_R8,&cf_ISyncPlanStatus);
  cVar1 = FUN_100170633(uVar3,&cf_Finished);
  if ((cVar1 == '\0') || (lVar2 = FUN_100166844(in_R8,&cf_ISyncPlanEntityNames), lVar2 == 0)) {
    return;
  }
  uVar3 = _CFArrayGetCount(lVar2);
  cVar1 = FUN_100170781(lVar2,0,uVar3,&cf_com_apple_calendars_Calendar);
  if ((cVar1 == '\0') &&
     ((cVar1 = FUN_100170781(lVar2,0,uVar3,&cf_com_apple_contacts_Group), cVar1 == '\0' &&
      (cVar1 = FUN_100170781(lVar2,0,uVar3,&cf_com_apple_mail_Account), cVar1 == '\0')))) {
    return;
  }
  uVar3 = FUN_1001c156e();
  FUN_1001c6987(uVar3,0x73646363,0,0,0);
  return;
}

