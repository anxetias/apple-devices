// name: progressInfoForObjectID:
// address: 10064510a

/* Function Stack Size: 0x14 bytes */

shared_ptr<ProgressInfo> __thiscall
AMPDeviceProgressMap::progressInfoForObjectID_
          (AMPDeviceProgressMap *this,ID param_1,SEL param_2,unsigned_int param_3)

{
  undefined8 uVar1;
  ID self;
  __shared_weak_count *extraout_RDX;
  shared_ptr<ProgressInfo> sVar2;
  
  uVar1 = (*(code *)PTR__objc_msgSend_10082c770)
                    (param_1,PTR_s_progressForObjectID__10088da08,param_3);
  self = _objc_retainAutoreleasedReturnValue(uVar1);
  if (self == 0) {
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 8) = 0;
  }
  else {
    _objc_msgSend_stret(this,self,PTR_s_progressInfo_10088da10);
  }
  (*(code *)PTR__objc_release_10082c7b0)(self);
  sVar2.field1_0x8 = extraout_RDX;
  sVar2.field0_0x0 = (ProgressInfo *)this;
  return sVar2;
}

