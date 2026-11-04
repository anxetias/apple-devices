// name: init
// address: 100644fdb

/* Function Stack Size: 0x10 bytes */

ID AMPDeviceProgressMap::init(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  ID IVar2;
  undefined8 uVar3;
  objc_super local_28;
  
  local_28.super_class = (class_t *)PTR_AMPDeviceProgressMap_100885720;
  local_28.receiver = param_1;
  IVar2 = _objc_msgSendSuper2(&local_28,PTR_s_init_10088c4d0);
  if (IVar2 != 0) {
    uVar3 = _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_10082dfb0);
    uVar1 = *(undefined8 *)(IVar2 + 8);
    *(undefined8 *)(IVar2 + 8) = uVar3;
    (*(code *)PTR__objc_release_10082c7b0)(uVar1);
  }
  return IVar2;
}

