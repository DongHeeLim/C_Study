struct block_device_operations{
    int (*open)(struct block_device *, fmode_t);
    void (*release)(struct gendisk *, fmode_t);
    int (*rw_page)(struct block_device *, sector_t, struct page*, int rw);
    int (*ioctl)(struct block_device *, fmode_t, unsigned, unsigned long);
    int (*compat_ioctl)(struct block_device *, fmode_t, unsigned, unsigned long);
    long (*direct_access)(struct block_device *, sector_t,
    void **, unsigned long *pfn, long size);
    unsigned int (*check_events) (struct gendisk *disk,
    unsigned int clearing);
    int (*media_changed) (struct gendisk *);
    void (*unlock_native_capacity) (struct gendisk *);
    int (*revalidate_disk) (struct gendisk *);
    int (*getgeo)(struct block_device *, struct hd_geometry *);
    void (*swap_slot_free_notify) (struct block_device *, unsigned long);
    struct module *owner;
};