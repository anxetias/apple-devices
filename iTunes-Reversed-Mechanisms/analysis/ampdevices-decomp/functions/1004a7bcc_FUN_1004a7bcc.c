// name: FUN_1004a7bcc
// address: 1004a7bcc

void FUN_1004a7bcc(void)

{
  ID IVar1;
  
  PHPhotoLibrary::enableMultiLibraryMode
            ((ID)PTR__OBJC_CLASS___PHPhotoLibrary_10082b530,PTR_s_enableMultiLibraryMode_10088d648);
  if (DAT_1008c7778 == 0) {
    IVar1 = PHPhotoLibrary::systemPhotoLibraryURLChangeNotificationName
                      ((ID)PTR__OBJC_CLASS___PHPhotoLibrary_10082b530,
                       PTR_s_systemPhotoLibraryURLChangeNotif_10088d650);
    _notify_register_dispatch
              (IVar1,&DAT_1008c7778,PTR___dispatch_main_q_10082cb60,
               &PTR___NSConcreteGlobalBlock_10085d008);
  }
  if (DAT_1008c777c == 0) {
    IVar1 = PHPhotoLibrary::systemPhotoLibraryAvailableNotificationName
                      ((ID)PTR__OBJC_CLASS___PHPhotoLibrary_10082b530,
                       PTR_s_systemPhotoLibraryAvailableNotif_10088d658);
    _notify_register_dispatch
              (IVar1,&DAT_1008c777c,PTR___dispatch_main_q_10082cb60,
               &PTR___NSConcreteGlobalBlock_10085d028);
  }
  PHPhotoLibrary::systemPhotoLibraryURL
            ((ID)PTR__OBJC_CLASS___PHPhotoLibrary_10082b530,PTR_s_systemPhotoLibraryURL_10088ca38);
  return;
}

