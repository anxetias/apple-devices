// name: initWithName:uuid:mediaLibraryTypeIdentifier:
// address: 1004a1bf4

/* Function Stack Size: 0x28 bytes */

ID AMPPHMediaGroup::initWithName_uuid_mediaLibraryTypeIdentifier_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  ID local_58;
  undefined *local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  puVar2 = PTR__objc_retain_10082c7b8;
  local_48 = (*(code *)PTR__objc_retain_10082c7b8)(param_3);
  local_40 = (*(code *)puVar2)(param_4);
  local_38 = (*(code *)puVar2)(param_5);
  local_50 = PTR_AMPPHMediaGroup_100885708;
  local_58 = param_1;
  IVar3 = NSObject::init((ID)&local_58,PTR_s_init_10088c4d0);
  if (IVar3 != 0) {
    _objc_storeStrong(IVar3 + 0x10,param_3);
    _objc_storeStrong(IVar3 + 8,param_4);
    _objc_storeStrong(IVar3 + 0x18,param_5);
    uVar4 = _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_10082dfa0);
    uVar1 = *(undefined8 *)(IVar3 + 0x28);
    *(undefined8 *)(IVar3 + 0x28) = uVar4;
    (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  }
  puVar2 = PTR__objc_release_10082c7b0;
  (*(code *)PTR__objc_release_10082c7b0)(local_38);
  (*(code *)puVar2)(local_40);
  (*(code *)puVar2)(local_48);
  return IVar3;
}

