import { useEffect, useState } from "react";
import React from "react";
import axios from "axios";

const Notifications = () => {
  const [notifications, setNotifications] = useState([]);

  useEffect(() => {
    axios.get("http://localhost:5000/notifications").then((response) => {
      setNotifications(response.data);
    });
  }, []);

  return (
    <div className="p-6 bg-white shadow-lg rounded-lg border border-gray-200">
      <h2 className="text-2xl font-semibold text-gray-700 mb-6">
        Notifications
      </h2>
      {notifications.length > 0 ? (
        notifications.map((notification) => (
          <div
            key={notification.id}
            className="mb-4 p-4 bg-gray-50 rounded-lg border border-gray-300"
          >
            <p className="text-gray-800 font-medium">{notification.message}</p>
            <p className="text-sm text-gray-500">
              {new Date(notification.timestamp).toLocaleString()}
            </p>
          </div>
        ))
      ) : (
        <p className="text-gray-500">No notifications available</p>
      )}
    </div>
  );
};

export default Notifications;
