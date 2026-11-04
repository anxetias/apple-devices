// name: FUN_100002210
// address: 100002210

undefined1 FUN_100002210(void)

{
  undefined *op;
  undefined1 uVar1;
  ID IVar2;
  
  op = PTR_s_processInfo_10088bad8;
  IVar2 = NSProcessInfo::processInfo
                    ((ID)PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,PTR_s_processInfo_10088bad8);
  IVar2 = NSProcessInfo::operatingSystem(IVar2,PTR_s_operatingSystem_10088bad0);
  if (IVar2 == 5) {
    IVar2 = NSProcessInfo::processInfo((ID)PTR__OBJC_CLASS___NSProcessInfo_10082c6a0,op);
    IVar2 = NSProcessInfo::isOperatingSystemAtLeastVersion_
                      (IVar2,PTR_s_isOperatingSystemAtLeastVersion__10088bac8);
    uVar1 = (undefined1)IVar2;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

