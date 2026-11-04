// name: FUN_100152d52
// address: 100152d52

ulong FUN_100152d52(undefined8 *param_1,undefined8 param_2)

{
  undefined *self;
  undefined8 uVar1;
  ID IVar2;
  
  self = PTR__OBJC_CLASS___AMSAcknowledgePrivacyTask_10082b710;
  uVar1 = FUN_1001bdcb0(param_2,0);
  uVar1 = _objc_retainAutoreleasedReturnValue(uVar1);
  IVar2 = AMSAcknowledgePrivacyTask::acknowledgementNeededForPrivacyIdentifier_account_
                    ((ID)self,PTR_s_acknowledgementNeededForPrivacyI_10088bca0,uVar1,
                     *(undefined8 *)*param_1);
  (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  return CONCAT71((int7)((ulong)param_1 >> 8),(char)IVar2 == '\0') & 0xffffffff;
}

