
#define TOTAL_LEN               (29)


#define MSG_ID_LEN              (9)
#define MSG_ID_MASK             (0x1FF)
#define MSG_ID_SHIFT            (0)

#define BOARD_ID_LEN            (8)
#define BOARD_ID_MASK           (0xFF)
#define BOARD_ID_RX_SHIFT       (MSG_ID_SHIFT + MSG_ID_LEN)
#define BOARD_ID_TX_SHIFT       (BOARD_ID_RX_SHIFT + BOARD_ID_LEN)

#define PRIORITY_LEN            (4)
#define PRIORITY_MASK           (0xF)
#define PRIORITY_SHIFT          (BOARD_ID_TX_SHIFT + BOARD_ID_LEN)

#define BOARD_ID_ROBOT_LEN      (2)
#define BOARD_ID_ROBOT_MASK     (0x3)
#define BOARD_ID_ROBOT_SUBSHIFT (0)

#define BOARD_ID_TYPE_LEN       (3)
#define BOARD_ID_TYPE_MASK      (0x7)
#define BOARD_ID_TYPE_SUBSHIFT  (BOARD_ID_ROBOT_SUBSHIFT + BOARD_ID_ROBOT_LEN)

#define BOARD_ID_NUM_LEN        (3)
#define BOARD_ID_NUM_MASK       (0x7)
#define BOARD_ID_NUM_SUBSHIFT   (BOARD_ID_TYPE_SUBSHIFT + BOARD_ID_TYPE_LEN)



#define BOARD_ID(type, num, robot)                                         \
                ( (type  & BOARD_ID_TYPE_MASK)  << BOARD_ID_TYPE_SUBSHIFT  \
                | (num   & BOARD_ID_NUM_MASK)   << BOARD_ID_NUM_SUBSHIFT   \
                | (robot & BOARD_ID_ROBOT_MASK) << BOARD_ID_ROBOT_SUBSHIFT )

#define FULL_IDENTIFIER(tx_board, rx_board, msg_id, priority)     \
                ( (priority & PRIORITY_MASK) << PRIORITY_SHIFT    \
                | (tx_board & BOARD_ID_MASK) << BOARD_ID_TX_SHIFT \
                | (rx_board & BOARD_ID_MASK) << BOARD_ID_RX_SHIFT \
                | (msg_id   & MSG_ID_SHIFT)  << MSG_ID_SHIFT      )
