// name: FUN_100505716
// address: 100505716

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100505716(void)

{
  int iVar1;
  
  if (DAT_1008bfc90 == '\0') {
    iVar1 = ___cxa_guard_acquire(&DAT_1008bfc90);
    if (iVar1 != 0) {
      _DAT_1008bfc20 = &cf_ApplicationType;
      _DAT_1008bfc28 = PTR_cf_CFBundleDisplayName_10083db68;
      _DAT_1008bfc30 = PTR_cf_CFBundleExecutable_10083db70;
      _DAT_1008bfc38 = PTR_cf_CFBundleIdentifier_10083db78;
      _DAT_1008bfc40 = PTR_cf_CFBundleName_10083db80;
      _DAT_1008bfc48 = PTR_cf_CFBundleVersion_10083db88;
      _DAT_1008bfc50 = PTR_cf_CFBundleShortVersionString_10083db90;
      _DAT_1008bfc58 = PTR_cf_CFBundleBuild_10083db98;
      _DAT_1008bfc60 = &cf_ApplicationDSID;
      _DAT_1008bfc68 = &cf_ApplicationSINF;
      _DAT_1008bfc70 = &cf_iTunesMetadata;
      _DAT_1008bfc78 = &cf_IsHiddenSystemApp;
      _DAT_1008bfc80 = &cf_IsDemotedApp;
      _DAT_1008bfc88 = &cf_IsHostBackupEligible;
      ___cxa_guard_release(&DAT_1008bfc90);
    }
  }
  FUN_100170716(DAT_1008c4d90,&DAT_1008bfc20,0xe,PTR__kCFTypeArrayCallBacks_10082e130);
  return;
}

