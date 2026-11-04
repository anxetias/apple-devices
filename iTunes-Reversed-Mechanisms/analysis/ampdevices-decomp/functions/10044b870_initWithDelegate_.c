// name: initWithDelegate:
// address: 10044b870

/* Function Stack Size: 0x20 bytes */

ID AMPLClientEventsDelegate::initWithDelegate_
             (ID param_1,SEL param_2,shared_ptr<AMPLibraryEventsDelegate> param_3)

{
  ID IVar1;
  ID local_28;
  undefined *local_20;
  
  local_20 = PTR_AMPLClientEventsDelegate_1008856f8;
  local_28 = param_1;
  IVar1 = NSObject::init((ID)&local_28,PTR_s_init_10088c4d0);
  if (IVar1 != 0) {
    FUN_10044b8c6(IVar1 + 8,*(undefined8 *)param_3.field0_0x0,
                  *(undefined8 *)(param_3.field0_0x0 + 8));
  }
  return IVar1;
}

